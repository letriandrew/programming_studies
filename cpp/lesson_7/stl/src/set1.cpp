#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;
//unique array pog

int main()
{
	set<int> sett;
	
	for(int i = 1; i < 6; i++)
	{
		sett.insert(i);
	}

	sett.insert(402);
	sett.insert(96);
	sett.insert(3);
	sett.insert(4);

	//set<int>::iterator bloom = sett.begin();

	for(auto bloom = sett.begin(); bloom != sett.end(); bloom++)
	{
		cout << *bloom << endl;
	}

	sett.erase(402);

	for(auto bloom = sett.begin(); bloom != sett.end(); bloom++)
	{
		cout << *bloom << endl;
	}

	if(sett.find(666) == sett.end())
	{
		cout << "Not found" << endl;
	}

	else
	{
		cout << "Found" << endl;
	}

	unordered_set<int> seth;
	
}
