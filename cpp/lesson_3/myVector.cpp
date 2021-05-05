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
	vector<int> revvec;
	
	for(int i = vec.size()-1; i >= 0; i--)
	{
		revvec.push_back(vec[i]);
	}
	
	return revvec;
}

void emptyVector(vector<int>& vec)
{
	vec.clear();
}

vector<int> multVector(vector<int> vec, int mult)
{
	vector<int> multvec;	

	for(int i = 0; i < vec.size(); i++)
	{
		multvec.push_back(vec[i] * mult);
	}

	return multvec;
}

bool isEmptyVector(vector<int> vec)
{
	if(vec.empty())
	{
		return true;
	}

	else
	{
		return false;
	}
}
