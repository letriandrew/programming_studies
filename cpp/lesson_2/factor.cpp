#include <iostream>
#include <vector>
using namespace std;

/* get a user's number and number is the number you go up to. create 2 vectors... 1: holds all prime numbers to the number given... 2: holds all composite numbers to the number given 

   edge cases becausen rich is a fcuk
*/

int main()
{
	vector<int> prime;
	vector<int> composite;
	int number;

	cout << "Enter a number: " << endl;
	cin >> number;

	if(number <= 1)
	{
		cout << "Error. This number cannot be used." << endl;
		return 1;
	}

	else
	{
		for(int i = 2; i <= number; i++)
		{
			if(number % i == 0)
			{
				composite.push_back(i);
			}
			
			else
			{
				prime.push_back(i);
			}

		}
	}
	
	cout << "These numbers factor into: " << endl;

	for(int i = 0; i < composite.size(); i++)
	{
		cout << composite[i] << endl;
	}

	cout << "These numbers do not factor: " << endl;

	for(int i = 0; i < prime.size(); i++)
	{
		cout << prime[i] << endl;
	}
	
	return 1;
}
