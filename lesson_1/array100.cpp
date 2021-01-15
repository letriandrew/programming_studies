#include <iostream>
using namespace std;

/* 

   make array size 100, count from 1 to 100, print in reverse xd

*/
const int ARR_SIZE = 100;

int main ()
{
	int arr [ARR_SIZE];

	for(int i = 0; i < ARR_SIZE; i++)
	{
		arr [i] = i + 1;
	}

	for(int i = ARR_SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << arr << " \"This is address for array \""; 
	
	return 1;
}
