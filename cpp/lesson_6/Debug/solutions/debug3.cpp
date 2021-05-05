#include <iostream>
using namespace std;

int addOne(int n)
{
	int yoyo;
	yoyo = n + 1;
	return yoyo;
}

int main()
{
    for(int i = 0; i < 10; ++i)
    {
        cout << addOne(i) << endl;

    }
}
