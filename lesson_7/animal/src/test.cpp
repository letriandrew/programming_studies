#include <iostream>
#include <string>
using namespace std;

class Shape
{
	private:
	int sides;	

	protected:
	int area;
	int perimeter;

	public:
	Shape():sides(0), area(0), perimeter(0)
	{
	}
	
	Shape(int s):sides(s), area(0), perimeter(0)
	{
	}

	void setSides(int s)
	{
		sides = s;
	}

	int getSides()
	{
		return sides;
	}

	friend ostream& operator<<(ostream& output, Shape shape)
	{
		output << "Sides: " << shape.sides << endl << "Area: " << shape.area << endl << "Perimeter: " << shape.perimeter;
		return output;
	}
};

class Triangle:protected Shape
{
	private:
	string type;

	public:
	Triangle():Shape(3), type("right")
	{
	}

	int getSides()
	{
		return Shape::getSides();
	}

	string getType()
	{	
		return type;
	}

	void setArea(int a)
	{
		area = a;
	}

	/*void setSides(int s)
	{
		Shape::setSides(s);
	}*/
	
	friend ostream& operator<<(ostream& output, Triangle t)
	{
		output << Shape(t) << "Shape: " << t.type;
		return output;
	}	
};

int main()
{
	Triangle tri;
	
	/*cout << tri << endl;
	cout << tri.getSides() << endl;
	cout << tri.getType() << endl;
	
	Shape s;
	
	cout << s << endl;
	*/
}
