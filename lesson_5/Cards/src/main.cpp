#include <iostream>
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;

int main()
{
	Cards king("spades", "black", "king");
	Cards queen("hearts", "red", "queen");
	Cards ten("diamonds", "red", "ten");
	Cards one("clubs", "black", "one");

	king.print();
	queen.print();
	ten.print();
	one.print();
}
