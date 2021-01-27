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

void print()
{
	cout << this->name << endl;
	cout << this->age << endl;
	cout << this->height << endl;
	cout << this->weight << endl;
	cout << this->hair << endl; 
}

//setter
void setName(string tname)
{
	this->name = tname;
}

void setAge(double tage)
{
	this->age = tage;
}

void setHeight(double theight)
{
	this->height = theight;
}

void setWeight(double tweight)
{
	this->weight = tweight;
}

void setHair(string thair)
{
	this->hair = thair;
}

//getter
string getName()
{
	return this->name;
}

double getAge()
{
	return this->age;
}

double getHeight()
{
	return this->height;
}

double getWeight()
{
	return this->weight;
}
 
Hair getHair()
{
	return this ->hair;
}
