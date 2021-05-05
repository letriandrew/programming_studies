#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int number;	
	cout << "Enter number: ";
	cin >> number;
	
	if(number == 5)
	{
		cout << "This is optimal." << endl;
	}

	else if (number == 4)
	{
		cout << "This is sus." << endl;
	}

	else if (number == 3)
	{
		cout << "This is o. k." << endl;
	}

	else if(number == 2)
	{
		cout << "This is bad." << endl;
	}

	else if (number == 1)
	{
		cout << "Give up on your hopes and dreams." << endl;
	}

	else
	{
		cout << "Wrong number idiot." << endl;
	}

	switch(number)
	{
		case 5:
			cout << "This is optimal." << endl; 
			break;
		case 4:
			cout << "This is sus." << endl;
			break;
		case 3:
			cout << "This is k" << endl;
			break;
		case 2:
			cout << "This bad" << endl;
			break;
		case 1:
			cout << "Give up on your hopes and dreams :D" << endl;
			break;
		default:
			cout << "Wrong #" << endl;
			break;
	}	
}
