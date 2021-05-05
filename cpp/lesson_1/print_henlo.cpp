#include <iostream>
using namespace std;
/* 
 
	Print hello the number of times a user requests

 */
int main (){
	int hen;
	
	cout << "How many hens do you want to lo? " << endl;
	cin >> hen;

	for(int i = 0; i < hen; i++){
		cout << "Henlo :D ";
	}
	
	return 1;
}

