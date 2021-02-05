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
	for(int i = vec.size() - 1; i > 0; i--)
	{
		for(int i = 0; i < vec.size(); i++)
		{
			if(vec[i] > vec[i+1])
			{
				swap(vec[i], vec[i+1]);
			}
			else
			{
				break;
			}
		}
	}
}
