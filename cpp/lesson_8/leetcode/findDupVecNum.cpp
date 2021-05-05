#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums)
{
	//int, counter
	map<int, int> numbers;
	for(int i = 0; i < nums.size(); i++)
	{	
		if(numbers.find(nums[i]) == numbers.end())
		{
			numbers[nums[i]] = 1; 	
		}
		else
		{
			numbers[nums[i]]++;
		}
	}
	for(map<int, int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		int key = it->first;
		int value = it->second;
		if(value != 1)
		{
			return key;
		}
	}
	return -1;
}

int main()
{

}

//[1 1 1 1 1] = 1
//[1 2 3 5 5] = 5
//[2 2] = 2
//[5 4 3 2 2] = 2 
