#include <iostream>
#include <string>
using namespace std;

int addRec1(int n)
{
	if(n == 0)
	{
		return 0;
	}
	int sum = addRec1(n - 1);
	return n + sum;
}

int main()
{
	cout << addRec1(5) << endl;
}
