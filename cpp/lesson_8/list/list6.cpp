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

void deleteNode(Node* head, int numberhead)
{
	Node *cur = head;
	int count = 0;
	while(cur != nullptr)
	{
		count++;
		if(count == numberhead)
		{
			Node *nextt = cur;
			cur = cur->prev;
			cur->next = nextt->next;
			delete nextt;
			return;
		}
		cur = cur->next;
	}
}

void deleteitlist(Node* head)
{
	Node *cur = head;
	while(cur != nullptr)
	{
		cur = cur->next;
		delete head;
		head = cur;
	}
}

void deletereclist(Node* head)
{
	if(head == nullptr)
	{
		return;
	}
	deletereclist(head->next);
	delete head;
}

Node* searchlist(Node* head, int find)
{
	if(head == nullptr)
	{
		return nullptr;
	}
	if(head->data == find)
	{
		return head;
	}
	Node* searchboy = searchlist(head->next, find);
	return searchboy;
}

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
