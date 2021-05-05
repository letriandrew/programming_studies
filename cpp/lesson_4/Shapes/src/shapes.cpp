//create a struct called shapes. give attributes = sides, type, length. constructor -> only want 1 possible input (edges and length). 
//normal setter and getters, print. create a getarea() (length equal on all sides). up to pentagon because richard is a pussy.

#include "shapes.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

Shape::Shape()
{
	this->sides = 3;
	this->length = 3;
	this->type = "Triangle";
}

Shape::Shape(int ssides, int slength)
{
	this->sides = ssides;
	this->length = slength;
	
	if(sides == 3)
	{
		this->type = "triangle";
	}

	else if(sides == 4)
	{
		this->type = "square";
	}

	else if(sides == 5)
	{
		this->type = "pentagon";
	}

	else
	{
		this->type = "triangle";
		this->sides = 3; 
	}
}

void Shape::print()
{
	cout << this->sides << endl;
	cout << this->length << endl;
	cout << this->type << endl;
}

void Shape::setSides(int rsides)
{
	this->sides = rsides;
}

void Shape::setLength(int rlength)
{
	this->length = rlength;
}

void Shape::setType(string rtype)
{
	this->type = rtype;
}

int Shape::getSides()
{
	return this-> sides;
}

int Shape::getLength()
{
	return this-> length;
}

string Shape::getType()
{	
	return this-> type;
}

double Shape::getarea()
{
	double area;
	if(sides == 3)
	{
		area = pow(this->length, 2);
		area = area * sqrt(3);
		area = area / 4; 
		return area;
	}

	else if(sides == 4)
	{
		area = pow(this->length, 2);
		return area;
	}	
	
	else
	{
		return 0;
	}
} 

