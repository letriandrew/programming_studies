#include <iostream>
#include <vector>
using namespace std;

void print(vector<string> words)
{
    for(int i = 0; i < words.size(); ++i)
    {
        cout << words[i] << endl;
    }
}

int main()
{
    string temp = "";
    vector<string> words; 

    do
	{
   	    cin >> temp;
		words.push_back(temp);
    } 
	while(temp != "-1");

    print(words);
}


