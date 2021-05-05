#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int SIZE = 10;
const int COLSIZE = 5;
const int ROWSIZE = 10;

int main()
{
	int arr1[SIZE];
	int arr2[] = {1,2,3,4,5};
	int* arr3;
	int arr3_size;
	//cout << "Enter a size" << endl;
	//cin >> arr3_size;
	
	arr3 = new int[arr3_size];	

	string arr4[SIZE];
	string a = "a";
	/*for(int i = 0; i < SIZE; i++)
	{
		arr4[i] = a;
		a += ('a' + i + 1);
		//cout << arr4[i] << endl;
	}
	
	cout << arr4[5][4] << endl;

	string* arr5;
	arr5 = new string [arr3_size];
	for (int i = 0; i < arr3_size; i++)
	{
		arr5[i] = a;
		a += ('a' + i + 1);
	}

	for (int i = 0; i < arr3_size; i++)
	{
		cout << arr5[i] << endl;
	}
	*/
	
	delete[] arr3;

	char arr6[ROWSIZE][COLSIZE];
	for(int i = 0; i < ROWSIZE; i++)
	{
		for(int j = 0; j < COLSIZE; j++)
		{
			arr6[i][j] = '_';
		}
	}

	for(int i = 0; i< ROWSIZE; i++)
	{
		for(int j = 0; j < COLSIZE; j++)
		{
			cout << arr6[i][j] << ' ';
		}
		cout << endl;
	}
	
	string userinput;
	cout << "Input string: " << endl;
	getline(cin,userinput);
	
	int row = 0;
	int col = 0;

	for(int k = 0; k < userinput.size(); k++)
	{
		if(col == COLSIZE)
		{
			col = 0;
			row++;
		}

		if(userinput[k] == ' ')
		{
			arr6[row][col] = '_';
		}			
		
		else
		{
			arr6[row][col] = userinput[k];
		}

		col++;
	}
	
	for(int i = 0; i< ROWSIZE; i++)
	{
		for(int j = 0; j < COLSIZE; j++)
		{
			cout << arr6[i][j] << ' ';
		}
		cout << endl;
	}
			
}
