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
