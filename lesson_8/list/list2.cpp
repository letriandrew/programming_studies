#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

//head = start of linked list, cur = int i in for loop, newnode = generate new nodes

void addNode(Node*& head, int data)
{
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = nullptr;
	
	if(head)
	{
		//step 1: make a new node and assign to head because we don't want to touch head
		Node* cur = head;
		//step 2: iterate to last node of linked list
		while(cur->next != nullptr)
		{
			cur = cur->next;
		}
		//step 3: assign last node->next to new node
		cur->next = newnode;
	}

	//if head is nullptr
	else
	{
		head = newnode;
	}
}

void printList(Node* head)
{
	Node* cur = head;
	while(cur != nullptr)
	{
		cout << cur->data << "->";
		cur = cur->next;
	}
	cout << "nullptr";
}

int main()
{
	Node* head = nullptr;
	addNode(head, 1);
	addNode(head, 2);
	addNode(head, 3);
	addNode(head, 4);
	printList(head);
}
