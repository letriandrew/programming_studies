#include <iostream>

#include <string>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
};

void print(Node*);

void revPrint(Node*);

void addAfter(Node*, int);

void addBefore(Node*, int);

int main()
{
	Node *head, *tail;
	head = tail = nullptr;
	Node *newnode;
}

void print(Node* head)
{
	Node* cur = head;
	while(cur != nullptr)
	{
		cout << cur->data << "->";
		cur = cur->next;
	}
	cout << "nullptr" << endl;
}

void revPrint(Node* tail)
{
	Node* cur = tail;
	while(cur != nullptr)
	{
		cout << cur->data << "->";
		cur = cur->prev;
	}
	cout << "nullptr" << endl;
}

void addAfter(Node* tail, int num)
{
	Node *cur = tail;
	Node *newnode = new Node;
	
}

void addBefore(Node* head, int num)
{

}
