#include <iostream>
using namespace std;

int main()
{
    string words = "hello"; 
    switch(words)
    {
        case "hello":
            cout << "hello there!" << endl;
            break;

        case "goodbye":
            cout << "Goodbye!" << endl;
            break;
    
        default:
            cout << "what are you saying" << endl;
            break;
    }
}
