#include <iostream>
using namespace std;

struct Node
{
	char data;
	Node* next;
};

int main()
{
	Node* head = nullptr;
	Node* tail = nullptr;

	head = new Node;
	head->data = 'u';
	head->next = nullptr;
	tail = head;

	tail->next = new Node;
	tail = tail->next;
	tail->next = nullptr;
	tail->data = 'c';
	
	tail->next = new Node;
	tail = tail->next;
	tail->next = nullptr;
	tail->data = 'k';
	
	tail->next = new Node;
	tail = tail->next;
	tail->data = 'u';
	tail->next = nullptr;	

	tail->next = new Node;
	tail = tail->next;
	tail->data = 'f';
	tail->next = nullptr;

	Node* cur = nullptr;
	cur = head;	

	Node* temp;
	
	while(cur->next != nullptr)
	{
		cur = cur->next;
	}

	temp = head;

	while(temp->next->next != nullptr)
	{
		temp = temp->next;
	}
	
	temp->next = nullptr;
	cur->next = head;
	head = cur;
	
	while(cur != nullptr)
	{
		cout << cur->data << endl;
		cur = cur->next;
	}	
}
