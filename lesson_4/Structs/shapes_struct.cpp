//create a struct called shapes. give attributes = sides, type, length. constructor -> only want 1 possible input (edges and length). 
//normal setter and getters, print. create a getarea() (length equal on all sides). up to pentagon because richard is a pussy.

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

	Shape()
	{
		this->sides = 3;
		this->length = 3;
		this->type = "Triangle";
	}
	
	Shape(int ssides, int slength)
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

	void print()
	{
		cout << this->sides << endl;
		cout << this->length << endl;
		cout << this->type << endl;
	}

	void setSides(int rsides)
	{
		this->sides = rsides;
	}

	void setLength(int rlength)
	{
		this->length = rlength;
	}

	void setType(string rtype)
	{
		this->type = rtype;
	}

	int getSides()
	{
		return this-> sides;
	}

	int getLength()
	{
		return this-> length;
	}

	string getType()
	{	
		return this-> type;
	}

	double getarea()
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
};

int main()
{
	Shape triangle = Shape(3, 6);
	Shape square = Shape(4, 4);
	Shape pentagon = Shape(5,10);
	Shape mystery = Shape(20, 30);
	Shape defaultshape;
	
	triangle.print();
	square.print();
	pentagon.print();
	mystery.print();
	defaultshape.print();

	triangle.setLength(1);
	cout << "Traingle length" << triangle.getLength() << endl;
	cout << "Triangle area" << triangle.getarea() << endl;
	
	square.setLength(2);
	cout << "Square length" << square.getLength() << endl;
	cout << "Square area" << square.getarea() << endl;

	mystery.setLength(3);
	cout << "Mystery length" << mystery.getLength() << endl;
	cout << "Mystery area" << mystery.getarea() << endl;

	return 0;
}
