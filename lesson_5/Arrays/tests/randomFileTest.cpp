#include <iostream>
#include <string>
#include "RandomFile.h"
using namespace std;

int main()
{
	RandomFile writeFile;
	writeFile.setFile("../resources/random20.txt");
	//write 20 random numbers in file
	writeFile.randomize(20);
		

}
