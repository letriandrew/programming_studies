#include <iostream>
#include <vector>
#include <string>
#include "Person.cpp"
using namespace std;

int main()
{
	Person Person1("Andrew", 20, 140, 180, "bald");
	Person Person2("Sarah", 36, 120, 140, "brunette");
	Person Person3("Ricardo", 22, 160, 160, "mohawk");
	Person Person4("JoeSchmo", 56, 200, 140, "mullet");

	Person1.print();
	Person2.print();
	Person3.print();
	Person4.print();
	
	cout << "Sarah's bday party today!!!" << endl;
	Person2.setAge(37);
	
	cout << "Ricardo prefers being called Richard :(" << endl;
	Person3.setName("Richard");

	cout << "Andrew grows his hair into a mullet" << endl;
	Person1.setHair("mullet");	
} 
