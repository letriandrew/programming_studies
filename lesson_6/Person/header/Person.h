#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "Hair.h"
using namespace std;

class Person
{
	public:
	Hair hair;
	string name;
	double age;
	
	//constructor
	Person();

	Person(Hair n);

	void say();

	double getage();
};

#endif
