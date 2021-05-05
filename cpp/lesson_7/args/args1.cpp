#include <iostream>
#include <string>
using namespace std;

//argc = every word = 1, based on spaces 
//argv = an array of strings

int main(int argc, char** argv)
{
	/*string s = "";
	
	while(s != "stop")
	{
		getline(cin, s);
		cout << s << endl;
	}*/

	for(int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
}
