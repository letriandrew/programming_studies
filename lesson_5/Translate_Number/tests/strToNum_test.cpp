#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
//make string to int, multifile
//const char[] = char*
const char* INPUT_FILE_PATH = "../resources/strings.min";
const char* OUTPUT_FILE_PATH = "../bin/num.txt";

int main()
{
	vector<string> strVec;
	vector<int> numVec;
	string str;

	ifstream input;
	input.open(INPUT_FILE_PATH);
	
	while(!input.eof())
	{
		input >> str;
		strVec.push_back(str);
	}

	input.close();

	for(int i = 0; i < strVec.size(); i++)
	{
		if (strVec[i] == "one" || strVec[i] == "One")
		{
			numVec.push_back(1);
		}
		else if (strVec[i] == "two" || strVec[i] == "Two")
		{
			numVec.push_back(2);
		}
		else if (strVec[i] == "three" || strVec[i] == "Three")
		{
			numVec.push_back(3);
		}
		else if (strVec[i] == "four" || strVec[i] == "Four")
		{
			numVec.push_back(4);
		}
		else if (strVec[i] == "five" || strVec[i] == "Five")
		{
			numVec.push_back(5);
		}
		else if (strVec[i] == "six" || strVec[i] == "Six")
		{
			numVec.push_back(6);
		}
		else if (strVec[i] == "seven" || strVec[i] == "Seven")
		{
			numVec.push_back(7);
		}
		else if (strVec[i] == "eight" || strVec[i] == "Eight")
		{
			numVec.push_back(8);
		}
		else if (strVec[i] == "nine" || strVec[i] == "Nine")
		{
			numVec.push_back(9);
		}
		else if (strVec[i] == "zero" || strVec[i] == "Zero")
		{
			numVec.push_back(0);
		}
		else
		{
			cout << "Error" << endl;
			return 0;
		}
	}
	
	ofstream output;
	output.open(OUTPUT_FILE_PATH);
	
	for(int i = 0; i < numVec.size(); i++)
	{
		output << numVec[i];
		cout << numVec[i] << endl;
	}
	
	output.close();
}
