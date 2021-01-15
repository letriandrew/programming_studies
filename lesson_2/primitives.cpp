#include <iostream>
#include <typeinfo>
using namespace std;

int main ()
{
	int intVar;
	bool boolVar;
	float floatVar;
	double doubleVar;
	char charVar;
	short shortVar;
	long longVar;
	long long longlongVar;
	unsigned unsignedVar;
	unsigned int unsignedintVar;

	cout << "The type of intVar is " << typeid(intVar).name() << " with a size of " << sizeof(intVar) << " bytes" << endl;
	cout << "The type of boolVar is " << typeid(boolVar).name() << " with a size of " << sizeof(boolVar) << " bytes" << endl;
	cout << "The type of floatVar is " << typeid(floatVar).name() << " with a size of " << sizeof(floatVar) << " bytes" << endl;
	cout << "The type of doubleVar is " << typeid(doubleVar).name() << " with a size of " << sizeof(doubleVar) << " bytes" << endl;
	cout << "The type of charVar is " << typeid(charVar).name() << " with a size of " << sizeof(charVar) << " bytes" << endl;
	cout << "The type of shortVar is " << typeid(shortVar).name() << " with a size of " << sizeof(shortVar) << " bytes" << endl;
	cout << "The type of longVar is " << typeid(longVar).name() << " with a size of " << sizeof(longVar) << " bytes" << endl;
	cout << "The type of longlongVar is " << typeid(longlongVar).name() << " with a size of " << sizeof(longlongVar) << " bytes" << endl;
	cout << "The type of unsignedVar is " << typeid(unsignedVar).name() << " with a size of " << sizeof(unsignedVar) << " bytes" << endl;
	cout << "The type of unsignedintVar is " << typeid(unsignedintVar).name() << " with a size of " << sizeof(unsignedintVar) << " bytes" << endl;
		
}
