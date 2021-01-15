#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	cout << "vector's size is " << vec.size() << endl;
	
	for(int i = 1; i <= 5; i++)
	{
		vec.push_back(i);
	}

	for(int i = 0; i < vec.size(); i++)
	{
		cout <<  vec[i] << endl;
	}	
}
