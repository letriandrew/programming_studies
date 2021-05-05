#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> colors;
	colors.push_back("red");
	colors.push_back("green");
	colors.push_back("blue");
	colors.push_back("yellow");
	colors.push_back("purple");

	for(vector<string>::iterator it = colors.begin(); it != colors.end(); it++)
	{
		cout << *it << endl;
	}

	string greeting = "hello";
	for(string::iterator it = greeting.begin(); it != greeting.end(); it++)
	{
		cout << *it << endl;
	}

	for(vector<string>::reverse_iterator it = colors.rbegin(); it != colors.rend(); it++)
	{
		cout << *it << endl;
	}
	
	for(auto it = colors.begin(); it != colors.end(); it++)
	{
		cout << *it << endl;
	}

	for(auto it = colors.rbegin(); it != colors.rend(); it++)
	{
		cout << *it << endl;
	}
}
