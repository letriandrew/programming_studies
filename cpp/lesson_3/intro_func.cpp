#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Function Prototypes
int addOne1(int num);
int addOne2(int& num);
void addOne3(int num);
void addOne4(int& num);
char addOne5(int num);

int main()
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int val4 = 0;
	int val5 = 64;

	cout << "val1 before is: " << val1<< endl;
	cout << "addOne1(val) is: " << addOne1(val1) << endl;
	cout << "val1 after is: " << val1 << endl;	
	cout << endl;

	cout << "val2 before is: " << val2<< endl;
	cout << "addOne2(val2) is: " << addOne2(val2) << endl;
	cout << "val2 after is: " << val2 << endl;	
	cout << endl;

	cout << "val3 before is: " << val3<< endl;
	//cout << "addOne3(val3) is: " << addOne3(val3) << endl;
	cout << "val3 after is: " << val3 << endl;	
	cout << endl;

	cout << "val4 before is: " << val4<< endl;
	//cout << "addOne4(val4) is: " << addOne4(val4) << endl;
	cout << "val4 after is: " << val4 << endl;	
	cout << endl;

	cout << "val5 before is: " << val5<< endl;
	cout << "addOne5(val5) is: " << addOne5(val5) << endl;
	cout << "val5 after is: " << val5 << endl;
	cout << "valt5 casted to char is: " << char(val5) << endl;
	cout << endl;	
}

//Function Defintions
int addOne1(int num)
{
	num = num + 1;
	return num;
}

int addOne2(int& num)
{
	num = num + 1;
	return num;
}

void addOne3(int num)
{
	num = num + 1;
}

void addOne4(int& num)
{
	num = num + 1;
}

char addOne5(int num)
{
	num = num + 1;
	return num;
}
