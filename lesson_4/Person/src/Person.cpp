#include <iostream>
#include <vector>
#include <string>
#include "Hair.h"
using namespace std;
// for each struct: constructors, getters, setters (defaults too). do actions a person would do (change addy, change hair, lose weight(excercise()), etc [THREE ACTIONS]). 
// main.cpp -> create 4 people that have data for all variables (diff) and print

//constructor
Person::Person()
{
}

Person::Person(string iname, double iage, double iheight, double iweight, string ihair)
{
	this->name = iname;
	this->age = iage;
	this->height = iheight;
	this->weight = iweight;
	this->hair = Hair(ihair);
}

void Person::print()
{
	cout << this->name << endl;
	cout << this->age << endl;
	cout << this->height << endl;
	cout << this->weight << endl;
	cout << this->hair << endl; 
}

//setter
void Person::setName(string tname)
{
	this->name = tname;
}

void Person::setAge(double tage)
{
	this->age = tage;
}

void Person::setHeight(double theight)
{
	this->height = theight;
}

void Person::setWeight(double tweight)
{
	this->weight = tweight;
}

void Person::setHair(string thair)
{
	this->hair = thair;
}

//getter
string Person::getName()
{
	return this->name;
}

double Person::getAge()
{
	return this->age;
}

double Person::getHeight()
{
	return this->height;
}

double Person::getWeight()
{
	return this->weight;
}
 
Hair Person::getHair()
{
	return this->hair;
}
