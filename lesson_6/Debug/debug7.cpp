/*
    1 errors
*/

#include <iostream>
#include <string>
using namespace std;

class MyString{

    public:
    string str;
    int size;

    MyString()
    {
        this->str = "";
        this->size = 0;
    }


    MyString(string temp)
    {
        this->str = temp;
        this->size = temp.size();    
    }

    int getSize()
    {
        return this->size;
    }
    
    void print()
    {
        cout << this->str;
    }
};


int main()
{
    MyString word1 = MyString("hello");
    cout << "My word is: ";
	word1.print(); 
	cout << endl;
}
