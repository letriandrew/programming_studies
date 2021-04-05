#include <iostream>
#include <string>
using namespace std;

struct Node
{
	string data;
	Node* next;

	Node():data(""), next(nullptr){}
	Node(string fata):data(fata), next(nullptr){}
};

struct List
{
	Node* head;
	
	//default construct
	List():head(nullptr){}
	
	//copy construct
	List(const List& llist):head(nullptr)
	{
		Node* cur = llist.head;
		while(cur != nullptr)
		{
			addNode(cur->data);
			cur = cur->next;
		}
	}
	
	//deconstruct
	~List()
	{
		Node* cur = head;
		while(cur != nullptr)
		{
			cur = cur->next;
			delete head;
			head = cur;
		}
	}

	void addNode(const string& str)
	{
		Node* newnode = new Node(str);
		
		if(head)
		{
			Node* cur = head;
			while(cur->next !=nullptr)
			{
				cur = cur->next;
			}
			cur->next = newnode;
		}

		else
		{
			head = newnode;
		}
	}

	int size()
	{
		Node* cur = head;
		int counter = 0;
		while(cur != nullptr)
		{
			cur = cur->next;
			counter++;
		}
		return counter;
	}

	void print()
	{
		Node* cur = head;
		while(cur != nullptr)
		{
			cout << cur->data << "->";
			cur = cur->next;
		}
		cout << "nullptr" << endl;
	} 

	bool empty()
	{
		if(head)
		{
			return false;
		}
		return true;
	}

	Node* find(const string& str)
	{
		Node* cur = head;
		while(cur != nullptr)
		{
			if(cur->data == str)
			{
				return cur;
			}
			cur = cur->next;
		}
		return nullptr;
	}

	void removeNode(const string& str)
	{
		Node* cur = head;
		Node* prev;
		//checks if there are any nodes and returns if no nodes
		if(cur == nullptr)
		{
			return;
		}
		//if first node is node we want to delete
		if(cur->data == str)
		{
			head = cur->next;
			delete cur;
		}
		//while parameter makes sure we do not go out of bounds 
		while(cur->next != nullptr)
		{
			//if parameter finds node before delete node
			//prev stores the node before delete node then iterate to delete node
			if(cur->next->data == str)
			{
				prev = cur;
				cur = cur->next;
				prev->next = cur->next;
				delete cur;
			}
			cur = cur->next;
		}
	}
};

int main()
{
	List list;
	/*list.addNode("Kyle"); //add node
	list.addNode("Frank");
	list.addNode("Cindy");
	list.removeNode("Kyle"); //remove node
	list.size(); //return size of list
	list.find("Cindy"); //return address of given data
	list.empty();
	list.print();*/


	cout << ((list.empty()) ? "List is empty" : "List is not empty") << endl;
	cout << "The size of list: " << list.size() << endl;
	list.removeNode("Ricard");
	cout << "Ricard has been removed." << endl;
	list.print();
	list.addNode("Ricard");
	list.addNode("Rishard");
	list.addNode("Rampart");
	list.addNode("Rickichi");
	cout << "The size after adding 4 nodes: " << list.size() << endl;
	cout << ((list.empty()) ? "List is empty" : "List is not empty") << endl;
	cout << "The address of Rickichi is: " << list.find("Rickichi") << endl;
	cout << "The address of Ratata is: " << list.find("Ratata") << endl;
	list.print();
	list.removeNode("Rishard");
	cout << "Rishard has been removed." << endl;
	list.removeNode("Hi");
	cout << "Hi has been removed." << endl;
	list.print();
	
	List lost(list);
	lost.print();	
}
