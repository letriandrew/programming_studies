#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;

// default constructor
Hero::Hero()
{
	this->name = "Alfred";
	this->x = 0;
	this->y = 0;
	this->weapon = "barefists";
}

// parameterized constructor
Hero::Hero(string iname)
{
	this->name = iname;
	this->x = 0;
	this->y = 0;
	this->weapon = "barecheeks";
}

//deconstructor
Hero::~Hero()
{
}

// setter
void Hero::setName(string tname)
{
	this->name = tname;
}
void Hero::setX(double tx)
{
	this->x = tx;
}
void Hero::setY(double ty)
{
	this->y = ty;
}
void Hero::setWeapon(string tweapon)
{
	this->weapon = tweapon;
}

// getter
string Hero::getName()
{
	return this->name;
}
double Hero::getX()
{
	return this->x;
}
double Hero::getY()
{
	return this->y;
}
string Hero::getWeapon()
{
	return this->weapon;
}

// public functions
void Hero::move(double tx, double ty)
{
	this->x = tx;
	this->y = ty;
}
void Hero::talk(Hero::Hero thero)
{
	cout << this->name <<" talks to " << thero.name;
}
void Hero::attack(Hero::Hero thero, string tweapon)
{
	cout << this->name << " attacks " << thero << " with " << tweapon;
}
void Hero::attack(string tweapon)
{
	cout << this->name << " attacks with " << tweapon;
}
void Hero::cry()
{
	cout << this->name << " cries";
}
