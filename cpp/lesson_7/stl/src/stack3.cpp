#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<char> pringles;
	for(int i = 0; i < 26; i++)
	{
		pringles.push('a' + i);
	}
	cout << pringles.top() << endl;
	cout << pringles.size() << endl;
	
	while(pringles.size() != 10)
	{
		pringles.pop();
	}

	cout << pringles.top() << endl;

	while(!pringles.empty())
	{
		cout << pringles.top() << endl;
		pringles.pop();
	}
}
