#include <iostream>
using namespace std;

/* create a function called is_palindrome that takes in string and checks if it is a palindrome.
 
*/

bool is_palindrome(string sentence)
{
	int l = 0;
	int h = sentence.length() - 1;

	while (l < h)
	{
		if (sentence[l] != sentence[h])
		{
			return false;
		}

		++l;
		--h;
	}

	return true;
}

int main ()
{
	string mainword;

	cout << "Enter a palindrome (your entry is case-sensitive): " << endl;
	getline(cin, mainword);

	if (is_palindrome(mainword))
	{
		cout << "This is a palindrome. ";
	}

	else
	{
		cout << "This is not a palindrome. ";
	}

	return 1;
}
