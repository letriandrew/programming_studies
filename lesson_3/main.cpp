#include <vector>
#include <iostream>
#include <iostream>
#include "myVector.h"
using namespace std;

//reverseVector[];
//printVector[];
//emptyVector[];
//zeroVector[];

int main()
{
	vector<int> test1 = {1,2,3,4,5};
	vector<int> test2 = {-1,-2,-3,-4,-5};

	vector<int> revtest1 = reverseVector(test1);
	printVector(test1);
	printVector(revtest1);
	vector<int> multrevtest1 = multVector(revtest1, 10);
	printVector(multrevtest1);
	
	if(isEmptyVector(test1))
	{
		cout << "It's empty lol" << endl;
	}

	else
	{
		cout << "not empty" << endl;
	}
}
