#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Card
{
	//variables
	string suit;
	string color;
	string face;
	
	//default constructor
	Card()
	{
		// this-> is whatever variable is calling it directly using . function
		this->suit = "";
		this->color = "black";
		this->face = "joker";
	}

	//parameterized constructor
	Card(string isuit, string iface)
	{
		this->suit = isuit;
		this->face = iface;
		
		if(suit == "spades" || suit == "clubs")
		{
			this->color = "black";
		}
		else if(suit == "hearts" || suit == "diamonds")
		{
			this->color = "red";
		}
	}

	//still paramterized constructor
	Card(string iface)
	{
		//joker default for whatever is inputted
		iface = "joker";
		this->suit = "";
		this->color = "black";
		this->face = iface;		
	}

	//print function
	void print()
	{
		cout << this->suit << endl;
		cout << this->color << endl;
		cout << this->face << endl;
	}

	//setters
	void setsuit(string tsuit)
	{
		this->suit = tsuit;
	}

	void setColor(string tcolor)
	{
		this->color = tcolor;
	}

	void setFace(string tface)
	{
		this->face = tface;
	}
	
	//getter 
	string getsuit()
	{
		return this->suit;
	}

	string getColor()
	{
		return this->color;
	}

	string getFace()
	{
		return this->face;
	}
};
