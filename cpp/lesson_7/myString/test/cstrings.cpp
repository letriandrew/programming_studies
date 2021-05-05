#include <iostream>
using namespace std;

int main()
{
	char* str1 = "keNNay";
	cout << str1 << endl;

	char str2[] = {'k', 'e', 'n'};
	cout << str2 << endl;
	
	char str3[3];
	str3[0] = 'k';
	str3[1] = 'e';
	str3[2] = 'n';

	cout << str3 << endl;
	
	char* str4 = new char [4];
	str4[0] = 'k';
	str4[1] = 'e';
	str4[2] = 'n';
	//str4[3] = '\0';

	cout << str4 << endl;

	delete[] str4;

	string* str5; 
	str5 = new string;
	*str5 = "kennay";

	cout << *str5 << endl;
	
	delete str5;

	str5 = new string [3];
	*(str5 + 0) = "kenny";
	str5[1] = "is";
	*(str5 + 2) = "gay pog";

	for(int i = 0; i < 3; ++i)
	{
		cout << *(str5 +i) << endl;
	}

	delete[] str5;
}
