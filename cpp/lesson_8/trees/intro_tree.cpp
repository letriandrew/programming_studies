#include <iostream>
#include <string>
using namespace std;

struct Node
{
	char data;
	Node* left;
	Node* right;	
};

void printTree(Node* root)
{
	if(root == nullptr)
	{
		return;
	}
	printTree(root->left);
	printTree(root->right);
	cout << root->data << "->";
}

int main()
{
	Node* groot = new Node;
	groot->data = 'A';
	groot->left = nullptr;
	groot->right = nullptr;
	Node* newnode = new Node;
	newnode->data = 'B';
	newnode->left = nullptr;
	newnode->right = nullptr;
	groot->left = newnode;
	newnode = new Node;
	newnode->data = 'C';
	newnode->left = nullptr;
	newnode->right = nullptr;
	groot->left->left = newnode;
	newnode = new Node;
	newnode->data = 'D';
	newnode->left = nullptr;
	newnode->right = nullptr;
	groot->left->right = newnode;
	newnode = new Node;
	newnode->data = 'O';
	newnode->left = nullptr;
	newnode->right = nullptr;
	groot->right = newnode;
	
	printTree(groot);
}
