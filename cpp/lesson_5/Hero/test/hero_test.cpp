#include <iostream>
#include <vector>
#include <string>
#include "Hero.h"
using namespace std;

int main()
{
	Hero player1("John");
	Hero player2("Alice");

	//coordinates (x,y)
	player1.move(152.3, -432.4);

	//directed, weapon
	player2.attack(player1, "glock");

	//no parameters just tears
	player1.cry();

	//default 
	player2.talk(player1);

	//weapon
	player1.attack("fists");
}
