#include <vector>
#include <string>
#include <iostream>
using namespace std;

void addvector(vector<string> &vec, string n)
{
	vec.push_back(n);
}

void addmatrix(vector<vector<char>> &matrix, string n)
{
	vector<char> namevec;
	for(int j = 0; j < n.size(); j++)
	{
		namevec.push_back(n[j]);
	}
	matrix.push_back(namevec);
}

void printvec1(const vector<string> &vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << "END" << endl;
}

void printmatrix1(const vector<vector<char>> &matrix)
{
	for(int i = 0; i < matrix.size(); i++)
	{
		for(int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
	cout << "END" << endl;
}

//helper function for printvec2

int findvecmax(const vector<string> &vec)
{
	int fat = 0;
	for(int i = 0; i < vec.size(); i++)
	{
		if(vec[i].size() > fat)
		{
			fat = vec[i].size();
		}
	}
	return fat;
}

void printvec2(const vector<string> &vec)
{
	int largest = findvecmax(vec);
	for(int i = 0; i < largest; i++)
	{
		for(int j = 0; j < vec.size(); j++)
		{
			if(i >= vec[j].size())
			{
				cout << " ";
			}	
			else
			{
				cout << vec[j][i];
			}
		}
		cout << endl;
	}
}

//hlper function for printmatrix2

int findmaxcolumn(const vector<vector<char>> &matrix)
{
	int fat = 0;
	for(int i = 0; i < matrix.size(); i++)
	{
		int count = matrix[i].size();
		if(count > fat)
		{
			fat = count;
		}	
	}
	return fat;
}

void printmatrix2(const vector<vector<char>> &matrix)
{
	int lambargo = findmaxcolumn(matrix);
	for(int i = 0; i < lambargo; i++)
	{
		for(int j = 0; j < matrix.size(); j++)
		{
			if(i >= matrix[j].size())
			{
				cout << " ";
			}
			else
			{
				cout << matrix[j][i];
			}
		}
		cout << endl;
	}		
}

int main()
{
	vector<string> strvector;
	vector<vector<char>> charmatrix;
	//Kenny Richard Andrew Bryan Keith Truman
	addvector(strvector, "Andrew");
	addvector(strvector, "Bryan");
	addvector(strvector, "Keith");
	addmatrix(charmatrix, "Richard");
	addmatrix(charmatrix, "Kenny");
	addmatrix(charmatrix, "Truman");
	printvec2(strvector);
	printmatrix2(charmatrix);
}
