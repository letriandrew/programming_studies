#include <iostream>
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;

int main()
{
	Card king("spades", "king");

	Card queen("hearts", "queen");

	Card ten("diamonds", "ten");

	Card one("clubs", "one");

	Card joker("joker");


	king.print();
	queen.print();
	ten.print();
	one.print();
}
