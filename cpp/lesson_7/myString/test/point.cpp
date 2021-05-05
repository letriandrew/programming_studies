#include <iostream>
using namespace std;

class Point
{
	private:
	int x;
	int y;

	public:
	Point()
	{
		this->x = 0;
		this->y = 0;	
	}

	Point(int x_, int y_)
	{
		this->x = x_;
		this->y = y_;
	}

	friend ostream& operator<<(ostream& os, Point p1)
	{
		os << p1.x << ", " << p1.y;
		return os;
	}

	Point operator+(Point p)
	{
		Point syumpoint;
		syumpoint.x = this->x + p.x;
		syumpoint.y = this->y + p.y;
		return syumpoint;
	}
};

int main()
{
	/*Point p1(6,9);
	Point p2(4,2);
	Point p3(2,2);
	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;*/

	Point* p1 = new Point(6,9);
	cout << *p1 << endl;
	
	delete p1;

	p1 = new Point(4,2);
	cout << *p1 << endl;
	
	delete p1;

	p1 = new Point(2,2);
	cout << *p1 << endl;	
	
	delete p1;

	p1 = new Point(1,3);
	Point* p2 = new Point(4, 3);
	cout << *(p1)+*(p2)+*(p1) << endl;

	delete p1;
	delete p2;
	
	//standard hot dogg
	//Point *p3, *p4;	
}
