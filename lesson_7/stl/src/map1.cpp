#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> dora;
	dora["backpack"] = 4;
	dora["maps"] = 1;
	dora["strands of hair"] = 432;
	cout << dora["backpack"] << endl << dora["maps"] << endl << dora["strands of hair"] << endl;

	map<string,int>::iterator it;
	for(it = dora.begin(); it != dora.end(); it++)
	{
		cout << it->first << ", " << it->second << endl;
	}
}
