#include "myVector.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void zeroVector(vector<int>& vec)
{
	//turn everything into 0
	for(int i = 0; i < vec.size(); i++)
	{
		vec[i] = 0;
	}
}

void printVector(vector<int> vec)
{
	//display contents in vector
	for(int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	
	cout << endl;
}

vector<int> reverseVector(vector<int> vec)
{
	vector<int> revvec = vec;
	int xd = 0;
	
	for(int i = vec.size()-1; i >= 0; i--)
	{
		revvec[xd] = vec[i];
		xd++;
	}
	
	vec = revvec;
}

void emptyVector(vector<int>& vec)
{
	//function to clear vec
	vec.clear();
}

vector<int> multVector(vector<int> vec, int mult)
{
	//for loop to go through each vector interval and multiply it back int mult
	for(int i = 0; i < vec.size(); i++)
	{
		vec[i] = vec[i] * mult;
	}
}

bool isEmptyVector(vector<int> vec)
{
	//function checks if vec is empty and cout result
	if(vec.empty())
	{
		cout << "The vector is empty. " << endl;
	}

	else
	{
		cout  << "The vector is not empty. " << endl;
	}
}
