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

	printVector(test1);
	printVector(test2);
	zeroVector(test1);
	zeroVector(test2);
	printVector(test1);
	printVector(test2);	
}
