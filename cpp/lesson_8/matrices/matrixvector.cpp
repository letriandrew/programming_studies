#include <iostream>
#include <vector>
using namespace std; 

void fillmatrix(vector<vector<char>> &matrix)
{
	for(int i = 0; i < 2; i++)
	{
		vector<char> temp;
		for(int j = 0; j < 13; j++)
		{
			if(i == 0)
			{
				temp.push_back('a' + j);	
			}
			else
			{
				temp.push_back('a' + 13 + j);
			}	
		}
		matrix.push_back(temp);
	}
}

void printmatrix(const vector<vector<char>> &matrix)
{
	for(int i = 0; i < matrix.size(); i++)
	{
		for(int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	//2 rows, 13 columns
	vector<vector<char>> alphabet;
	fillmatrix(alphabet);
	printmatrix(alphabet);
}
