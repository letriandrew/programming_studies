#include <iostream>
#include <string>
using namespace std;

int main()
{
	int grades;
	cout << "Enter your grade: ";
	cin >> grades;

	if(grades >= 90)
	{
		cout << "This an A " << endl;
	}

	else if(grades >= 80)
	{
		cout << "B" << endl;
	}

	else if(grades >= 70)
	{
		cout << "Cum" << endl;
	}

	else if(grades >= 60)
	{
		cout << "D..." << endl;
	}

	else 
	{
		cout << "F" << endl;
	}
		
	
	switch(grades)
	{
		case 90 ... 100:
			cout << "A" << endl;
			break;
		case 80 ... 89:
			cout << "B" << endl;
			break;
		case 70 ... 79:
			cout << "C" << endl;
			break;
		case 60 ... 69:
			cout << "D" << endl;
			break;
		case 0 ... 59:
			cout << "F" << endl;
			break;
		default:
			cout << "what" << endl;
			break;
	}
}

	
