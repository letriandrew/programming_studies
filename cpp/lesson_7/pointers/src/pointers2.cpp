#include <iostream>
using namespace std;

int main()
{
	char lol = 'a';
	char* ptr = &lol;

	//pass by pointer
	cout << "Initial lol: " << lol << endl;
	lol = lol + 1;
	cout << "After lol: " << lol << endl;
	cout << "Initial *ptr: " << *ptr << endl;
	*ptr = 'c';
	cout << "After *ptr: " << *ptr << endl;
	cout << "After lol again: " << lol << endl;

	//pass by value
	int var1 = 10;
	int var2 = var1;
	cout << "Initial var1: " << var1 << endl;
	var1 = 20;
	cout << "After var1: " << var1 << endl;
	cout << "Initial var2 : " << var2 << endl;
	var2 = 40;
	cout << "After var2: " << var2 << endl;
	cout << "After var1 again: " << var1 << endl;
}
