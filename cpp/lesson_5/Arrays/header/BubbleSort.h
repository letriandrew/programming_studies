#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class BubbleSort
{
	private:
	vector<int> vec;

	public: 
	BubbleSort();
	BubbleSort(int arr[], int n);
	void readarr(int arr[], int n);
	void readfile(string file);
	void sort();
	void print();
	void transfer(string file);


#endif
