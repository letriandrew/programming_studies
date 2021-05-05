#include <iostream>
#include <string>
#include <fstream>
#include "InsertionSort.h"
using namespace std;

InsertionSort()
{
}

InsertionSort(int arr[], int n)
{
	this->readarr(arr, n);
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
	ifstream input;
	input.open(file.c_str());
	int temp;	

	while(!input.eof())
	{
		input >> temp;
		this->vec.push_back(temp);
	}
}

void sort()
{
	for(int i = 1; i < vec.size(); i++)
	{
		for(int j = i; j > 0; j--)
		{
			if(arr[j] > arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
			else
			{
				break;
			}
		}
	}
}

void revsort()
{
	for(int i = vec.size() - 1; i > 0; i--)
	{
		for(int j = i; j < vec.size() - 1; j++)
		{
			if(arr[j] > arr[j + 1]
			{
				swap(arr[j], arr[j + 1]);
			}
			else
			{
				break;
			}
		}
	}
}

void print();

void transfer(string file);
