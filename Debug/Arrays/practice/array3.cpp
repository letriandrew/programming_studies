// 3 major errors
// 1 style error

#include <iostream>
#include <vector>
using namespace std;
//const int SIZE
const int SIZE = 5;

int main()
{
	int intArr1[] = {1, 2, 3, 4, 5};
	int intArr2[] = {5, 4, 3, 2, 1};

	cout << "Compare integer array" << endl;
	for(int i = 0; i < SIZE; ++i)
	{
		//no indication for which index to compare within both arrays
		if(intArr1[i] < intArr2[i])
		{
			cout << intArr1[i] << " is less than " << intArr2[i] << endl;
		}
		
		//edge case if 1 == 1
		else if(intArr1[i] == intArr2[i])
		{
			cout << intArr1[i] << " is the same as " << intArr2[i] << endl;
		}		

		else 
		{
			cout << intArr1[i] << " is greater than " << intArr2[i] << endl;
		}	
	} 

	cout << endl;
}
