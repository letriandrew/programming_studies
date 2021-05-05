//create a struct called shapes. give attributes = sides, type, length. constructor -> only want 1 possible input (edges and length). 
//normal setter and getters, print. create a getarea() (length equal on all sides). up to pentagon because richard is a pussy.

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "shapes.h"
using namespace std;

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
