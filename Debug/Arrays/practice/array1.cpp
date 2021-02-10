
// there are 3 errors
// don't try to change the logic, just the conditions

#include <iostream>
using namespace std;

const int SIZE = 5;

int main()
{
	//semicolon below
	int arr[] = {1, 2, 3, 4, 5};
	//multiple declarations of i
	int i = 0;
	
	cout << "The old array is: " << endl;
	for(i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << " ";	
	}
	//the condition goes out of bounds
	for(i = 0; i < SIZE-1; ++i)
	{
		arr[i + 1] += arr[i];
	}

	cout << endl << "The new array is: " << endl;
	for(i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << " ";
	}	
}
