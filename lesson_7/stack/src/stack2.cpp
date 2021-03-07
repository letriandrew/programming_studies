#include <iostream>
#include <string>
#include <stack>
using namespace std;

//function takes in string, string has "()", return size of string excluding paren and everyhting inside paren

//(lo)l
//hey()gfdsg
//()

int sizenoparen(string n)
{
	int count = 0;
	for(int i = 0; i < n.size(); i++)
	{
		if(n[i] == '(')
		{	
			do
			{
				i++;
			}
			while(n[i] != ')');
		}
		
		else
		{
			count++;
		}
	}
	return count;
}

//)
//a
//(
//t
//a
//f

int sizewstack(string n)
{
	stack<char> waffles;	
	int counter = 0;

	for(int i = 0; i < n.size(); i++)
	{
		waffles.push(n[i]);
	}	

	for(int i = n.size(); i > 0; i--)
	{
		if(waffles.top() == ')')
		{
			do
			{
				i--;
				waffles.pop();
			}
			while(waffles.top() != '(');
		}

		else
		{
			counter++;
			waffles.pop();
		}
	}
	return counter;
}

int main()
{
	string pringles;
	getline(cin, pringles);
	cout << sizewstack(pringles) << endl;
}
