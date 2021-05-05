/* get user input (sentence) (getline lol) transfer every single char into vector. with vector, capitalize every char and then print it backwards
 */

#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int islower(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

int main()
{
	string userint;
	vector<char> vec;

	cout << "Enter a sentence you want to store: " << endl;
	getline(cin,userint);

	//vector<char> vec(userint.begin(), userint.end());

	for(int i = 0; i < userint.length(); i++)
	{
		vec.push_back(userint[i]);
	}

	for(int i = userint.length(); i >= 0; i--)
	{
		if(islower(vec[i]))
		{
			vec[i] = toupper(vec[i]);
		}

		else if(!islower(vec[i]))
		{
			vec[i] = tolower(vec[i]);
		}

		cout << vec[i];
	}

	return 1;
}
