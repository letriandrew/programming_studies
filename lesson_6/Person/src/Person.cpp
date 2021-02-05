#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

//constructor
Person::Person()
{
	this->hair = Hair();
	this->name = "Richard";
	this->age = 22;
}

Person::Person(Hair n)
{
	this->hair = n;
	this->name = "Bichard";
	this->age = 222;
}

void Person::say()
{
	cout << "Hi" << endl;
}

double Person::getage()
{
	return this->age;
}

