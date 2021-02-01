#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;

class Hero
{
	private:
	string name;
	double x;
	double y;
	string weapon;
	
	public:
	// default constructor
	Hero();

	// parameterized constructor
	Hero(string iname);
	
	//deconstructor
	~Hero();

	private:
	// setter
	void setName(string tname);
	void setX(double tx);
	void setY(double ty);
	void setWeapon(string tweapon);

	// getter
	string getName();
	double getX();
	double getY();
	string getWeapon();

	public:
	// public functions
	void move(double tx, double ty);
	void talk(Hero thero);
	void attack(Hero thero, string tweapon);
	void attack(string tweapon);
	void cry();
};
#endif
