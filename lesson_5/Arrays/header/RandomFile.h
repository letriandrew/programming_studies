#ifndef RANDOMFILE_H
#define RANDOMFILE_H
#include <iostream>
#include <string>
using namespace std;

class RandomFile
{
	private:
	string file;
	
	public:
	RandomFile();
	
	void setFile(string nfile);

	string getFile();
	
	void randomize(int n);	
};


#endif
