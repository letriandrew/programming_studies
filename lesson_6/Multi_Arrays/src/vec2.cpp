#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec1;
	//about vectors: act the same way as arrays
	cout << vec1[2]; //access
	vec1[2] = 10; //assign

	// 2d arrays
	vector<vector<int>> vec2d;
	vec2d.push_back(vec1);
	vec2d[0].push_back(1);

	
	//n-dimensional vectors
	vector<vector<vector<int>>> vec3d;

	{{{}},{{}},{{}}}
}
