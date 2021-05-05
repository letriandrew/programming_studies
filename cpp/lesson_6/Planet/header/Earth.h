#ifndef EARTH_H
#define EARTH_H
#include <iostream>
#include <string>
#include "Country.h"
#include "Ocean.h"
using namespace std;

class Earth
{
	public:
	Ocean ocean;
	Country country;
	unsigned time;

	//constructor
	Earth();

	Earth(Country country, Ocean ocean);

	int findtime(Country n);
} 

#endif 
