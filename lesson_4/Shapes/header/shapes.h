//create a struct called shapes. give attributes = sides, type, length. constructor -> only want 1 possible input (edges and length). 
//normal setter and getters, print. create a getarea() (length equal on all sides). up to pentagon because richard.

#ifndef __SHAPES_H__
#define __SHAPES_H__
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

struct Shape
{
	int sides;
	int length;
	string type;

	Shape();
	Shape(int ssides, int slength);
	void print();
	
	void setSides(int rsides);
	void setLength(int rlength);
	void setType(string rtype);
	
	int getSides();
	int getLength();
	string getType();
	double getarea();
};
#endif
