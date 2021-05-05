#include <iostream>
#include <string>
using namespace std;

void printRec1(int n, string str)
{
	//base case
	if(n == 0)
	{
		return;
	}
	cout << str << endl;
	//recursive call
	printRec1(n - 1, str);
}

void printRec2(int n, string str)
{
	if(n == 0)
	{
		return;
	}
	printRec2(n - 1, str);
	cout << str << endl;
}

// 5 4 3 2 1
void printRec3(int n)
{
	if(n == 0)
	{
		return;
	}
	cout << n << endl;
	printRec3(n - 1);
}

// 1 2 3 4 5
void printRec4(int n)
{
	if(n == 0)
	{
		return;
	}
	printRec4(n - 1);
	cout << n << endl;
}

int main()
{
	//print Hello 5 times
	printRec1(5, "Hello");
	cout << endl;
	printRec2(5, "Heblo");
	cout << endl;
	printRec3(5);
	cout << endl;
	printRec4(5);
	cout << endl;
}
