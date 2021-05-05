#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Animal
{
	int legs;
	int height;	
	string gender;
	string type;

	//contructor
	Animal()
	{
	}

	Animal(string itype, string igender, int iheight, int ilegs)
	{
		this->type = itype;
		this->gender = igender;
		this->height = iheight;
		this->legs = ilegs;
	}
	
	void print()
	{
		cout << this->legs << endl;
		cout << this->height << endl;
		cout << this->gender << endl;
		cout << this->type << endl;
	}

	//setter
	void setLegs(int rlegs)
	{
		this->legs = rlegs;
	}
	
	void setHeight(int rheight)
	{
		this->height = rheight;
	}
	
	void setGender(int rgender)
	{
		this->gender = rgender;
	}

	void setType(int rtype)
	{
		this->type = rtype;
	}

	//getter
	int getLegs()
	{
		return this->legs;
	}	

	int getHeight()
	{
		return this->height;
	}

	string getGender()
	{
		return this->gender;
	}

	string getType()
	{
		return this->type;
	}
};

void printAnimal(Animal ani)
{
	cout << ani.legs << endl;
	cout << ani.height << endl;
	cout << ani.gender << endl;
	cout << ani.type << endl;
}

int main()
{
	Animal animal1;
	animal1.legs = 2;
	animal1.height = 72;
	animal1.gender = "male";
	animal1.type = "human";

	Animal animal2;
	animal2.legs = 4;
	animal2.height = 30;
	animal2.gender = "female";
	animal2.type = "wolf";

	Animal animal3;
	animal3.legs = 0;
	animal3.height = 118;
	animal3.gender= "female";
	animal3.type = "boa constrictor";
	
	printAnimal(animal1);
	animal2.print();


	Animal animal4 = Animal("Zebra", "Male", 100, 0);
	animal4.print();
	cout << animal4.getLegs() << endl;
	animal4.setLegs(2);
}
