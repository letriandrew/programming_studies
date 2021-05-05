#include <iostream>
#include <string>
#include <vector>
#include "BubbleSort.h"
using namespace std;
 
BubbleSort()
{
}

BubbleSort(int arr[], int n)
{
	this->readarr(arr,n);
}

void readarr(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		this->vec.push_back(arr[i]);
	}
}

void readfile(string file)
{
	ifsream input;
	input.open(file.c_str());
	int temp;

	while(!input.eof())
	{
		input >> temp;
		this->vec.push_back(temp);
	}

void sort()
{
	for(int i = vec.size(); i > 0; i--)
	{
		for(int j = 0; j < (i-1); j++)
		{
			if(vec[j] > vec[j+1])
			{
				swap(vec[j], vec[j+1]);
			}
		}
	}
}

void revsort()
{
	for(int i = 0; i < vec.size() - 1; i++)
	{
		for(int j = vec.size() - 1; j > i; j--)
		{
			if(vec[j] > vec[j-1])
			{
				swap(vec[j], vec[j-1]);
			}
		}
	}
}
