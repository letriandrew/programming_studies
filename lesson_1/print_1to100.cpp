#include <iostream>
using namespace std;

/*print 1- 100, every mult of 3 = print "fizz", every mult of 5 = print "Buzz", every mult of 3 & 5 = print "fizzBuzz"
 */

//if else for mult of 3/5/3&5

int main ()
{

	int number = 100;

	for(int i = 1; i <= number; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "fizzBuzz" << ", ";
		}

		else if (i % 3 == 0)
		{
			cout << "fizz" << ", ";	
		}

		else if (i % 5 == 0)
		{
			cout << "Buzz" << ", ";
		}

		else
		{
			cout << i << ", ";
		}

	}
	
	return 1;
}
