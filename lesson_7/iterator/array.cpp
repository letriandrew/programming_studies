#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int begin = 0;
	int end = 10;

	for(int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	for(int *it = arr + begin; it != arr + end; it++)
	{
		cout << *it << endl;
	}

	for(int *it = arr + begin; it != arr + end; it++)
	{
		*it = *it + 1;
		// or (*it)++;
		// or *it += 1;
	}

	for(int *it = arr + end - 1; it != arr + begin - 1; it--)
	{
		cout << *it << endl;
	}

	
}
