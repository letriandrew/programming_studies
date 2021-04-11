#include <iostream>
#include "BST.h"
using namespace std;

int main()
{

	BST tree;
	tree.insert(5);
	tree.insert(10);
	tree.insert(1);
	tree.insert(8);
	tree.insert(3);
	tree.insert(4);
	tree.insert(9);
	tree.insert(1);
	tree.display();
	cout << tree.find(1) << endl;
	cout << tree.find(69) << endl;
	tree.clear();
	tree.display();
	//insert -> void
	//remove -> void
	//clear -> void
	//find -> Node*
	//display -> void
}
