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

int sumtree(Node* root)
{
	if(root == nullptr)
	{
		return 0;
	} 
	int leftsum = sumtree(root->left);
	int rightsum = sumtree(root->right);
	int data = root->data;
	return leftsum + rightsum + data;
}

int greatsumtree(Node* root, int comp)
{
	if(root == nullptr)
	{
		return 0;
	}
	if(comp < root->data)
	{
		return greatsumtree(root->left, comp) + greatsumtree(root->right, comp) + root->data;
	}
	return greatsumtree(root->left, comp) + greatsumtree(root->right, comp); 
}

bool findnum(Node* root, int nemo)
{
	if(root == nullptr)
	{
		return false;
	}
	bool leftnemo = findnum(root->left, nemo);
	bool rightnemo = findnum(root->right, nemo);
	bool confirm = leftnemo || rightnemo;
	if(nemo == root->data)
	{
		return true;
	}
	return confirm;
}

bool findnum2(Node* root, int nemo)
{
	if(root == nullptr)
	{
		return false;
	}
	if(nemo < root->data)
	{
		bool leftnemo = findnum(root->left, nemo);
		return leftnemo;
	}
	else if(nemo > root->data)
	{
		bool rightnemo = findnum(root->right, nemo);
		return rightnemo;
	}
	else
	{
		return true;
	}
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
	cout << "The sum of this tree is: " << sumtree(root) << endl;
	cout << "Sum greater than 3: " << greatsumtree(root, 3) << endl;
}
