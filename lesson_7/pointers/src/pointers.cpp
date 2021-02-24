#include <iostream>
using namespace std;

int main()
{
	int* ptr;
	int var = 10;
	int var1 = 5;
	int var2 = 4;
	ptr = &var1;
	
	cout << "Value of var: "  << var << endl;
	cout << "Address of var: " << &var << endl;
	cout << "Value of var1: "  << var1 << endl;
	cout << "Address of var1: " << &var1 << endl;
	cout << "Value of var2: "  << var2 << endl;
	cout << "Address of var2: " << &var2 << endl;
	

	cout << "Value of ptr: " << ptr << endl;
	cout << "Address of ptr: " << &ptr << endl;
}
