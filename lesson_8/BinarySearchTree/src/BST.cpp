#include <iostream>
#include <string>
#include "BST.h"
using namespace std;

BST::BST()
{
	root = nullptr; 
}

BST::~BST()
{
	this->clear();
}

void BST::insert(int data)
{
	//root == nullptr
	//existing root->data = data >> don't insert anything
	//pass root into cur
	if(root == nullptr)
	{
		root = new Node(data);
		return;
	}	
	this->inserthelper(root, data);
}

void BST::inserthelper(Node* node, int data)
{
	//base case
	if(node->data == data)
	{
		return;
	}
	//base for data < node->data
	if(node->data > data && node->left == nullptr)
	{
		Node* newnode = new Node(data);
		node->left = newnode;
	}
	//base for data > node->data
	else if(node->data < data && node->right == nullptr)
	{
		Node* newnode = new Node(data);
		node->right = newnode;
	}
	//recursive call
	else if(node->data > data)
	{
		this->inserthelper(node->left, data);
	}
	else if(node->data < data)
	{
		this->inserthelper(node->right, data);
	}
	
}

void BST::display()
{
	this->displayhelper(root);
}

void BST::displayhelper(Node* node)
{
	if(node == nullptr)
	{
		return;
	}
	this->displayhelper(node->left);
	cout << node->data << "->";
	this->displayhelper(node->right);
}

void BST::clear()
{
	this->clearhelper(root);
	root = nullptr;
}

void BST::clearhelper(Node* node)
{
	if(node == nullptr)
	{
		return;
	}
	this->clearhelper(node->left);
	this->clearhelper(node->right);
	delete node;
}

Node* BST::find(int data)
{
	return this->findhelper(root, data);
}

Node* BST::findhelper(Node* node, int data)
{
	Node* finder = nullptr;
	//handles if root = nullptr and no find
	if(node == nullptr)
	{
		return nullptr;
	}
	if(node->data == data)
	{
		return node;
	}
	else if(node->data < data)
	{
		finder = this->findhelper(node->right, data);
	}
	else if(node->data > data)
	{
		finder = this->findhelper(node->left, data);
	}
	return finder;
}

void BST::remove(int data)
{}

void BST::removehelper(Node* node, int data)
{
}
