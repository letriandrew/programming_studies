#include <iostream>
#include <string>
#include <vector>
#include "SelectionSort.h"
using namespace std;
 
SelectionSort()
{
}

SelectionSort(int arr[], int n)
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
	for(int i = 0; i < vec.size(); i++)
	{
		int index = i;
		int min = vec[i];
		for(int j = i; j < vec.size(); j++)
		{
			if(vec[j] < min)
			{
				min = vec[j];
				index = j;
			}
		}
		swap(vec[i], vec[index]);
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
