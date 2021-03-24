#include <iostream>
#include <map>
#include <string>
using namespace std;

int firstUniqChar(string s)
{
	map<char, int> letters;
	//storing counts into map
	for(int i = 0; i < s.size(); i++)
	{
		char ch = s[i];
		if(letters.find(ch)==letters.end())
		{
			letters[ch] = 1;
		}
		else
		{
			letters[ch]++;
		}
	}
	//iterate through string
	for(int i = 0; i < s.size(); i++)
	{
		char firstchar = s[i];
		if(letters[firstchar] == 1)
		{
			return i;
		}
	} 
	return -1;
}

int main()
{
	cout << firstUniqChar("leetcode") << endl;
	cout << "->0" << endl;
	cout << firstUniqChar("little") << endl;
	cout << "->1" << endl;
	cout << firstUniqChar("") << endl;
	cout << "->-1" << endl;
	cout << firstUniqChar("eel") << endl;
	cout << "->2" << endl;
	cout << firstUniqChar("llooppeeqq") << endl;
	cout << "->-1" << endl;
}
