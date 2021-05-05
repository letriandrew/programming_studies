#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node node1, node2, node3;
	Node* head;

	head = &node2;
	
	head->next = &node3;
	head->next->next = &node1;
	head->next->next->next = nullptr;
	
	head->data = 2;
	head->next->data = 3;
	head->next->next->data = 1;

	//cout << head->data << endl;
	//cout << head->next->data << endl;
	//cout << head->next->next->data << endl;

	Node* cur = head;
	/*cout << cur->data << endl;
	cur = cur->next;
	cout << cur->data << endl;
	cur = cur->next;
	cout << cur->data << endl;
	cur = head;*/

	//cur->next != nullptr
	while(cur != nullptr)
	{
		cout << cur->data << endl;
		cur = cur->next;
	} 

	Node* temp;
	cur = head;
	temp = cur;
	cur = cur->next;
	cur = cur->next;
	cur->next = temp;
	head = cur;
	cur = cur->next;
	cur = cur->next;
	cur->next = nullptr;
	cur = head;
 	
	while(cur != nullptr)
	{
		cout << cur->data << endl;
		cur = cur->next;
	}
}
