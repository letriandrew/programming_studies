#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<int> pringles;
	
	//.size() - u know
	//.empty() - returns true if stack is empty (applies to all STLs 2)
	//.push(int) - pushes onto stack
	//.top() - getter to see on top of stack
	//.pop() - removes top item from stack

	pringles.push(1);
	pringles.push(2);
	pringles.push(3);

	cout << pringles.top() << endl;

	pringles.pop();
	pringles.pop();
	
	cout << pringles.top() << endl;
	
	cout << pringles.size() << endl;

	if(pringles.empty())
	{
		cout << "Pringles is emp" << endl;
	}

	else
	{
		cout << "NO" << endl;
	}
}
