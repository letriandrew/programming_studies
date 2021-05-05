#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	//static arrays
	int arr[]= {1,2,3,4,5}; //auto set to 5
	int arr2[5]; //create array of 5
	int arr5[size];

	//dynamic array (set size)
	int* arr4; //create pointer (empty array)

	int size;
	
	cout << "Enter size array: "; 
	cin >> size;
	
	//allocate memory
	arr4 = new int[size];

	//clean memory
	delete[] arr4;

	cin >> size;

	//allocate
	arr4 = new int [size];
}
