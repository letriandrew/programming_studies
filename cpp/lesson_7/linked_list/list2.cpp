#include <iostream>
using namespace std; 

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node n1, n2, n3, n4;

	n1.data = 1;
	n2.data = 2;
	n3.data = 3;
	n4.data = 4;
	n1.next = nullptr;
	n2.next = nullptr;
	n3.next = nullptr;
	n4.next = nullptr;

	//making linked list from n1 -> n4
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	
	Node* head = &n1;

	cout << head->data << endl;
	cout << head->next->data << endl;
	cout << head->next->next->data << endl;
	cout << head->next->next->next->data << endl;

	Node* tail = head->next->next->next;

	Node n5;
	n5.data  = 5;
	n5.next = nullptr;

	//*tail.next = &n5 (same)
	tail->next = &n5;
	tail = tail->next;

	Node n6;
	n6.data = 6;
	n6.next = nullptr;
	
	tail->next = &n6;
	//tail = &n6; (same)
	tail = tail->next;
}
