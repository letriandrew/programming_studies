using namespace std;
#include <iostream>
#include <cmath>

int main()
{
	int number, newnum;
	bool isComp = false;

	cout << "Etner a number: " << endl;
	cin >> number; 
	
	if(number <= 1)
	{
		cout << "Error. Invalid number." << endl;
		return 0;
	}

	newnum = int(sqrt(number));

	for(int i = 2; i <= newnum; i++)
	{
		if(number % i == 0)
		{
			isComp = true;
		}
	}

	if(isComp == true)
	{
		cout << "This number is composite. " << endl;
	}

	else
	{
		cout << "This number is prime. " << endl;
	}

}			
