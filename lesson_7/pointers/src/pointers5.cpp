#include <iostream>
using namespace std;

int main()
{
	char chararr[26];

	for(int i = 0; i < 26; i++)
	{
		chararr[i] = 'a' + i;
	}

	for(int i = 0; i < 26; i++)
	{
		cout << chararr[i] << " ";
	}

	cout << endl;

	
	char* charptr = new char[26];
	
	for(int i = 0; i < 26; i++)
	{
		charptr[i] = 'A' + i;
	}


	for(int i = 0; i < 26; i++)
	{
		cout << charptr[i] << " ";
	}

	delete[] charptr;
	charptr = nullptr;	

	cout << endl;

	int* intptr = new int;
	*intptr = 100;
	
	cout << "intptr's address: " << &intptr << endl;
	cout << "intptr's value: " << intptr << endl;
	cout << "intptr's dereference: " << *intptr << endl;

	delete intptr;
	//preference nullptr
	intptr = NULL;
}
