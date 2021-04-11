#ifndef BST_H
#define BST_H

struct Node{
	int data;
	Node* left;
	Node* right;

	Node(int doo):data(doo),left(nullptr),right(nullptr){}
};

class BST{
	private:
	Node* root;
	void inserthelper(Node*, int);
	void removehelper(Node*, int);
	void displayhelper(Node*);
	void clearhelper(Node*);
	Node* findhelper(Node*,  int);
	
	public:
	BST();
	~BST();
	void insert(int);
	void remove(int);
	void clear();
	Node* find(int);
	void display();
};



#endif
