#include <iostream>
#include <string>
using namespace std;

int summation(int);

int factorial(int);

void fillArrayREC(int* , int, int start = 0);

void fillArrayITER(int*, int);

void printArrayREC(int*, int, int start = 0);

void printArrayITER(int*, int);

int main()
{
	cout << summation(100) << endl;
	int arrREC[20];
	int arrITER[20];
	fillArrayREC(arrREC, 20);
	fillArrayITER(arrITER, 20);
	printArrayREC(arrREC, 20, 0);
	printArrayITER(arrITER, 20);
}

int summation(int num)
{
	if(num == 1)
	{
		return 1;
	}
	int sum = summation(num - 1);
	return sum + num;
}

int factorial(int num)
{
	if(num == 1)
	{
		return 1;
	}
	return factorial(num - 1) * num;
}

void fillArrayREC(int* arr, int size, int start)
{
	if(start == size)
	{
		return;
	}
	*(arr + start) = start;
	fillArrayREC(arr, size, start + 1);
	
}

void fillArrayITER(int* arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		*(arr + i) = i;
	}
}

void printArrayREC(int* arr, int size, int start)
{
	if(start == size)
	{
		return;
	}
	cout << *(arr+start) << " ";
	printArrayREC(arr, size, start + 1);
}

void printArrayITER(int* arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}
