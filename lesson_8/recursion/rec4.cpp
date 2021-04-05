#include <iostream>
#include <string>
#include <cassert>
#include <climits>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void printiter(int number);

void printrec(int number);

int powiter(int number, int square);

int powrec(int number, int square);

Node* createlist(int number);

void printlist(Node* list);

void printlistrec(Node* list);

void revprintlistrec(Node* list, bool start = true);

int main()
{
	//printiter(10);
	//printrec(10);
	//cout << powiter(2, 4) << endl;
	//cout << powrec(3, 3) << endl;
	//cout << powrec(20, -1) << endl;
	Node* head = createlist(5);
	printlist(head);
	printlistrec(head);
	revprintlistrec(head);
}

void printiter(int number)
{
	assert(number >= 1);	
	while(number != 1)
	{	
		cout << number << ", ";
		number--;
	}
	cout << endl << "end" << endl;
}

void printrec(int number)
{
	assert(number >= 1);
	if(number == 1)
	{
		cout << endl << "end" << endl;
		return;
	}
	cout << number << ", ";
	printrec(number - 1);
}

int powiter(int number, int square)
{
	int counter = 0;
	int base = number;
	assert(square >= 0);
	while(square != counter)
	{
		number = number * base;
		counter++; 
	}
	return number;
}

int powrec(int number, int square)
{
	assert(square >= 0);
	if(square == 0)
	{
		return number;
	} 
	int fatnumber = powrec(number, square - 1);
	return fatnumber * number;	
}


Node* createlist(int number)
{
	//initialize
	Node* head = nullptr;
	Node* newnode = nullptr;
	Node* cur = nullptr;
	//bounds check
	if(number < 1)
	{
		return head;
	}
	//create head, assign cur
	newnode = new Node;
	newnode->data = 1;
	newnode->next = nullptr;
	head = newnode;
	cur = head;
	//make list
	for(int i = 2; i <= number; i++)
	{
		newnode = new Node;
		newnode->data = i;
		newnode->next = nullptr;
		cur->next = newnode;
		cur = cur->next;
		newnode = nullptr;
	}
	return head;
}

void printlist(Node* list)
{
	Node* cur = list;
	if(cur == nullptr)
	{
		return;
	}
	while(cur != nullptr)
	{
		cout << cur->data << "->";
		cur = cur->next;
	}
	cout << "nullptr" << endl;
}

void printlistrec(Node* list)
{
	if(list == nullptr)
	{
		cout << "nullptr" << endl;
		return;
	}
	cout << list->data << "->";
	printlistrec(list->next);
}

void revprintlistrec(Node* list, bool start)
{
	if(list == nullptr)
	{
		return;
	}
	revprintlistrec(list->next, false);
	cout << list->data << "->";
	if(start == true)
	{
		cout << "nullptr" << endl;
	}
}
