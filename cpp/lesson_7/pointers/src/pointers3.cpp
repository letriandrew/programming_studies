#include <iostream>
using namespace std;

int main()
{
	int arr[5] = {1,2,3,4,5};
	cout << "Print of array[0]: " << arr[0] << endl;
	cout << "Print of array[4]: " << arr[4] << endl;
	cout << "Print of array: " << arr << endl;
	cout << "Address print of array0: " << &arr[0] << endl;
	cout << "Address print of array4: " << &arr[4] << endl;
	cout << "Address print of array: " << &arr << endl;
	cout << "Dereference print of array: " << *arr << endl;
	cout << "Dereference print of array + 4: " << *(arr + 4) << endl;
	cout << "Dereferebce orubt if array + 0: " << *(arr + 0) << endl;
	cout << "4 array print: " << 4[arr] << endl;
}
