#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[] = {3, 4, 2, 1};

	InsertionSort sort0;

	InsertionSort sort1(arr, 4);

	sort0.readarr(arr, 4);

	sort0.readfile("number.txt");

	sort0.sort();

	sort0.revsort();

	sort0.print();

	sort0.transfer("othernumber.txt");
}
