#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//1D Arrays

	//static array
	int arr[100];

	//dynamic array
	int *arr2 = new int[100];

	//vector 
	vector<int> arr3;
	vector<int> arr4(100, 0);

	//2D Arrays

	//static 2d array
	//rows, coulmns
	int matrix[50][100];
	
	//dynamic 2d array
	int **matrix2 = new int *[50];
	for(int i = 0; i < 50; i++)
	{
		matrix2[i] = new int[100];
	}	

	//vector 2d array
	vector<vector<int>> matrix3;
	for(int row = 0; row < 50; row++)
	{
		for(int col = 0; col < 100; col++)
		{
			matrix[row][col] = 1;
		}
	}

	vector<int> tempvector(100,1);
	//initialize vector 50 rows, 100 columns
	for(int row = 0; row < 50; row++)
	{
		matrix3.push_back(tempvector);
	}

	for(int row = 0; row < 50; row++)
	{
		for(int col = 0; col < 100; col++)
		{
			cout << matrix3[row][col] << " ";
		}
		cout << endl;
	}
}
