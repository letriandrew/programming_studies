#ifndef COUNTRY_H
#define COUNTRY_H
#include <iostream>
#include <string>
using namespace std;

class Country
{
	public:
	string governmenttype;
	string weather;
	string name;
	
	Country();

	Country(string gov, string weather);
}

#endif
