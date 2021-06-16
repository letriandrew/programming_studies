#include <iostream>
#include <vector>
using namespace std;

void fillmatrix(vector<vector<int>> &matrix, int rows, int cols)
{
	for(int i = 0; i < rows; i++)
	{
		vector<int> temp;
		for(int j = 0; j < cols; j++)
		{
			int tempadd = i * cols;
			temp.push_back(1 + tempadd + j);
		}
		matrix.push_back(temp);
	}
}

vector<int> overlapsubtract(vector<vector<int>> &matrix1, vector<vector<int>> &matrix2)
{
	for(int i = 0; i < matrix1.size(); i++)
	{
		for(int j = 0; j < matrix2[i].size(); j++)
		{
			
		}
	}
}

void printmatrix(const vector<vector<int>> &matrix, int rows, int cols)
{
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int blue_, red_;
	//2 matrixes of int, user input for 2 num (m,n), blue has to be size MxN, red has to be size NxM
	cout << "Input a number for m: ";
	cin >> blue_;
	cout << "Input a number for n: ";
	cin >> red_;

	vector<vector<int>> bluematrix;
	vector<vector<int>> redmatrix;
	
	fillmatrix(bluematrix, blue_, red_);
	printmatrix(bluematrix, blue_, red_);
} 
