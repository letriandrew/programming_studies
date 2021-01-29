#include <iostream>
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;

int main()
{
	Card king("spades", "king");
	cout << "king" << endl;
	Card queen("hearts", "queen");
	Card ten("diamonds", "ten");
	cout << "king" << endl;
	Card one("clubs", "one");
	cout << "king" << endl;
	Card joker("joker");
	cout << "king" << endl;

	king.print();
	queen.print();
	ten.print();
	one.print();
}
