#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
		
	Node(int deez):data(deez), left(nullptr), right(nullptr)
	{
	}
};

//6 4 2 1 3 5 9 7 8 10
void printpreorder(Node* root)
{
	if(root == nullptr)
	{
		return;
	}
	cout << root->data << ", ";
	printpreorder(root->left);
	printpreorder(root->right);
}

//1 3 2 5 4 6 9 7 8 10
void printinorder(Node* root)
{
	if(root == nullptr)
	{
		return;
	}
	printinorder(root->left);
	cout << root->data << ", ";
	printinorder(root->right);
}


//8 7 10 9 6 4 2 5 1 3
void printpostorder(Node* root)
{
	if(root == nullptr)
	{
		return;
	}
	printpostorder(root->left);
	printpostorder(root->right);
	cout << root->data << ", ";
}
int main()
{
	Node* root = new Node(6);
	root->left = new Node(4);
	root->right = new Node(9);
	root->left->left = new Node(2);
	root->left->right = new Node(5);
	root->right->left = new Node(7);
	root->right->right = new Node(10);
	root->left->left->left = new Node(1);
	root->left->left->right = new Node(3);
	root->right->left->right = new Node(8);
	printpreorder(root);
	cout << endl;
	printinorder(root);
	cout << endl;
	printpostorder(root);
	cout << endl;
}
