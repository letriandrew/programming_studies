#ifndef __PERSON_H__ 
#define __PERSON_H__
#include <iostream>
#include <vector>
#include <string>
#include "Hair.h"
#include "Address.h"
using namespace std;
// for each struct: constructors, getters, setters (defaults too). do actions a person would do (change addy, change hair, lose weight(excercise()), etc [THREE ACTIONS]). 
// main.cpp -> create 4 people that have data for all variables (diff) and print

struct Person
{
	string name;
	double age;
	double height;
	double weight;
	Hair hair;	
	Address address;
}
#endif
