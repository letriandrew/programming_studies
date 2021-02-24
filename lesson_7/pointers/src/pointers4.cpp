#include <iostream>

using namespace std;

const long STATIC_SIZE = 1000000;
const long long DYNAMIC_SIZE = 1000000000;

int main()
{
	int statarr[STATIC_SIZE];
	int* dynamarr;
	cout << "First address of static array: " << &statarr[0] << endl;
	cout << "Last adress of static array: " << &statarr[STATIC_SIZE - 1] << endl;
	cout << "Size of static array: " << STATIC_SIZE << endl;
	dynamarr = new int[DYNAMIC_SIZE];
	cout << "First address of dynam array: " << &dynamarr[0] << endl;
	cout << "Last address of dynam array: " << &dynamarr[DYNAMIC_SIZE - 1] << endl;
	cout << "Size of dynamic array: " << DYNAMIC_SIZE << endl;
	delete[] dynamarr;
}
