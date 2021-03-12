#include <iostream>
using namespace std;

struct Person
{
	int age;
	Person* mom;

	Person()
	{
	}
};

int main()
{
	Person andrew;
	Person momm;
	Person grandma;	
	Person ggrandma;

	andrew.mom = &momm;
	momm.mom = &grandma;
	grandma.mom = &ggrandma;
	ggrandma.mom = nullptr;

	andrew.age = 20;
	momm.age = 40;
	grandma.age = 60;
	ggrandma.age = 80;

	
	cout << andrew.age << endl;

	/*
	cout << (*andrew.mom).age << endl;

	cout << (*momm.mom).age << endl;

	cout << (*(*andrew.mom).mom).age << endl;

	cout << (*(*(*andrew.mom).mom).mom).age << endl;
	*/
	
	cout << (andrew.mom)->age << endl;

	cout << (andrew.mom)->mom->age << endl;

	cout << (andrew.mom)->mom->mom->age << endl;

}
