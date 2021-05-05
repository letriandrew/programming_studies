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

	cout << n1.data << endl;
	cout << (*n1.next).data << endl;
	cout << n1.next->data << endl;
	cout << n1.next->next->data << endl;
	cout << n1.next->next->next->data << endl;

	n1.next = nullptr;
	n2.next = nullptr;
	n3.next = nullptr;
	n4.next = nullptr;

	//linked list from n4 -> n1
	n4.next = &n3;
	n3.next = &n2;
	n2.next = &n1;

	cout << n4.data << endl;
	cout << n4.next->data << endl;
	cout << n4.next->next->data << endl;
	cout << n4.next->next->next->data << endl;


}
