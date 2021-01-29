#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
//make string to int, multifile
//const char[] = char*
const char* INPUT_FILE_PATH = "../resources/nums.min";
const char* OUTPUT_FILE_PATH = "../bin/str.txt";

//3 5 7
int main()
{
	vector<int> numVec;
	vector<string> strVec;
	int num;

	ifstream input;
	input.open(INPUT_FILE_PATH);
	
	while(!input.eof())
	{
		input >> num;
		numVec.push_back(num);
	}

	input.close();

	for(int i = 0; i < numVec.size(); i++)
	{
		switch(numVec[i])
		{
			case 3:
				strVec.push_back("Three");
				break;
			case 5:
				strVec.push_back("Five");
				break;
			case 7:
				strVec.push_back("Seven");
				break;
		}
	}
	
	ofstream output;
	output.open(OUTPUT_FILE_PATH);
	
	for(int i = 0; i <strVec.size(); i++)
	{
		output << strVec[i];
	}
	
	output.close();
}
