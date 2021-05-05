#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
	vector<char> arr = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	
	/*
	for(int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	
	*/

	for(char letter: arr)
	{
		cout << letter << endl;
	}

	for(char& letter: arr)
	{	
		letter = '0';
	}
	
	for(auto letter: arr)
	{
		cout << letter << endl;
	}
}
