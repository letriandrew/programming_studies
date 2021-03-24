#include <iostream>
#include <stack>
#include <string>
using namespace std;

int reverse(int x)
{
	int mod = x % 10;
	int div = x / 10;
	int counter = 0;
	int finale;
	stack<int> reverse;
	while(div != 0)
	{
		reverse.push(mod);
		div = div - mod;
		int mod = div % 10;
		counter++;
		cout << "while" << endl;
	}
	for(int i = counter; i > 0; i--)
	{
		int multi = i * 1;
		int num = reverse.top();
		reverse.pop();
		num = multi * num;
		finale = finale + num;
		cout << "for" << endl;
	}
	if(finale > 2^31 - 1)
	{
		return 0;
	}
	return finale;
}

int main()
{
	cout << reverse(12345) << endl;
	return 0;
}
