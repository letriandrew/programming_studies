#include <iostream>
using namespace std;

int main()
{
    string temp = "";
    vector<int> words; 

    do{
        cin >> temp;
        words.push_back(temp);
    } while(temp != "-1");

    print(words);
}

void print(vector<int> words)
{
    for(int i = 0; i < words.size(); ++i)
    {
        cout << words[i] << endl;
    }
}
