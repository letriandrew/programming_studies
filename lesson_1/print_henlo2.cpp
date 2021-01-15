#include <iostream>
using namespace std;
/* 
 
	Print hello the number of times a user requests till user types "-1"

 */
int main(){
	int hen;
	
	cout << "How many hens do you want to lo? " << endl; 
	cin >> hen;

	while(hen != -1)
	{		
		if(hen >= 1)
		{
			for(int i = 0; i < hen; i++)
			{
				cout << "Henlo D: " << endl; 
			}
		}

		else if(hen == 0)
		{
			cout << "";
		}

		else if(hen < 0)
		{
			cout << endl << "This is not possible xd. Try again ig. ";
		}

		cout << endl << "How many hens do you want to lo? " << endl; 
		cin >> hen;
	}

	cout << "Tahnks for using my program :D" << endl;
	
	return 1;
}

