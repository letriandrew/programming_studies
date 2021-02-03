#include <iostream>
#include <string>
#include <fstream>
#include "RandomFile.h"
using namespace std;

const int SIZE = 100;
	
RandomFile::RandomFile()
{	
}

void RandomFile::setFile(string nfile)
{
	this->file = nfile;
}

string RandomFile::getFile()
{
	return this->file;
}

void RandomFile::randomize(int n)
{
	ofstream output;
	output.open(this->file.c_str());

	
	for (int i = 0; i < n; i++)
	{
		int randnum = rand() % SIZE;
		output << randnum << " ";
	}
	
	output.close();
}
