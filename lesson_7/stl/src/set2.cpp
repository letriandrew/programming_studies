#include <iostream>

#include <set>
#include <vector>
#include <ctime>
using namespace std;

void printVec(const vector<int>& v)
{
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ", ";
	}
}

void printSet(const set<int>& s)
{
	for(auto lol = s.begin(); lol != s.end(); lol++)
	{	
		cout << *lol << ", ";
	}
}

int dupploSet(const vector<int>& v, const set<int>& s)
{
	int size;
	size = v.size() - s.size();
	return size;	
}


int main()
{
	vector<int> randoguy;
	
	for(int i = 0; i < 10; i++)
	{
		randoguy.push_back(rand() % 4);
	}

	set<int> sett;

	for(int i = 0; i < 10; i++)
	{
		sett.insert(randoguy[i]);
	}

	printVec(randoguy);
	cout << endl << endl;
	printSet(sett);
	cout << endl << endl;
	cout << dupploSet(randoguy, sett);
}
