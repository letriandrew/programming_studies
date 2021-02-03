#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class InsertionSort
{
	private:
	vector<int> vec;
	
	public:
	InsertionSort();
	InsertionSort(int arr[], int n);
	void readarr(int arr[], int n);
	void readfile(string file);
	void sort();
	void print();
	void transfer(string file);
};


#endif
