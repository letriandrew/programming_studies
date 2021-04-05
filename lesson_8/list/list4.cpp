#include <iostream>
#include <string>
using namespace std;

//doubly linked list

class Node
{
	public:
	char data;
	Node* next;
	Node* prev;
};
	
class List
{
	private:
	Node* head;
	Node* tail;

	public:
	//deconstructor/constructors
	List();
	List(const List& llist);
	~List();
	
	//mutators	
	void add(const char& chair);
	void remove(const char& chair);
	void insert(const char& chair, int index);
	void reverse();
	//dogg
	void sort();

	//getters
	int size();
	void print();
	bool empty();
	Node* find(const char& chair);
};
