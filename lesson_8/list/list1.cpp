#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node *head, *temp, *newhead;
	head = nullptr;
	temp = nullptr;
	newhead = nullptr;

	head = new Node;
	head->data = 1;
	head->next = nullptr;

	newhead = new Node;
	newhead->data = 2;
	newhead->next = nullptr;

	head->next = newhead;
	
	newhead = new Node;
	newhead->data = 3;
	newhead->next= nullptr;

	head->next->next = newhead;

	newhead = new Node;
	newhead->data = 4;
	newhead->next = nullptr;

	head->next->next->next = newhead;

	newhead = new Node;
	newhead->data =5;
	newhead->next = nullptr;

	temp = head;
	
	while(temp->next != nullptr)
	{
		temp = temp->next;
	}
	
	temp->next = newhead;

	newhead = new Node;
	newhead->data = 6;
	newhead->next = nullptr;

	/*temp=head;
	
	while(temp->next != nullptr)
	{
		temp = temp->next;
	}

	temp->next = newhead;*/

	temp = temp->next;
	temp->next = newhead;

	Node* cur = head;

	while(cur != nullptr)
	{
		cout << cur->data << "->";
		cur = cur->next;
	}
}
