#include <iostream>

#include <string>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
};

void print(Node* n);

void revPrint(Node* n);

int main()
{
	Node *head, *tail;
	head = tail = nullptr;
	Node *newnode;
	
	newnode = new Node;
	newnode->data = 1;
	newnode->next = nullptr;
	newnode->prev = nullptr;
	head = newnode;	
	tail = newnode;	

	print(head);
	revPrint(tail);

	newnode = new Node;
	newnode->data = 2;
	newnode->next = nullptr;
	newnode->prev = tail;
	tail->next = newnode;
	tail = tail->next;

	print(head);
	revPrint(tail);

	newnode = new Node;
	newnode->data = 3;
	newnode->next= nullptr;
	newnode->prev = tail;
	tail->next = newnode;
	tail = tail->next;

	print(head);
	revPrint(tail);

	newnode = new Node;
	newnode->data = 4;
	newnode->next = nullptr;
	newnode->prev = tail;
	tail->next = newnode;
	tail = tail->next;
	
	print(head);
	revPrint(tail);

	newnode = new Node;
	newnode->data = 0;
	newnode->next = head;
	newnode->prev = nullptr;
	head->prev = newnode;
	head = head->prev;

	print(head);
	revPrint(tail);

	newnode = new Node;
	newnode->data = -1;
	newnode->next = head;
	newnode->prev = nullptr;
	head->prev = newnode;
	head = head->prev;

	print(head);
	revPrint(tail);

	newnode = new Node;
	newnode->data = -2;
	newnode->next = head;
	newnode->prev = nullptr;
	head->prev = newnode;
	head = head->prev;

	print(head);
	revPrint(tail);
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
