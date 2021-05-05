#include <iostream>
#include <string>
using namespace std;

int main()
{
	int* pointer1 = nullptr;
	string* pointer2 = nullptr;
	bool* pointer3 = nullptr;

	string str;
	pointer2 = &str;
	*pointer2 = "hi";
	
	cout << pointer2 << endl;
	cout << *pointer2 << endl;

	bool answer;
	pointer3 = &answer;
	*pointer3 = true;

	cout << pointer3 << endl;
	cout << *pointer3 << endl;

	pointer1 = new int;
	*pointer1 = 1;

	cout << pointer1 << endl;
	cout << *pointer1 << endl;

	delete pointer1;
	pointer1 = nullptr;

	int size;
	cout << "Size: " << endl;
	cin >> size;

	pointer2 = new string[size];

	for(int i = 0; i < size; i++)
	{
		pointer2[i] = "dog";
	}

	for(int i = 0; i < size; i++)
	{
		cout << pointer2[i] << endl;
	}

	delete[] pointer2;
	pointer2 = nullptr;
}
