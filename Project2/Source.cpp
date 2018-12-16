#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* ref;
};

int main()
{
	node* head = new node;
	head->data = 5;

	node* two = new node;
	two->data = 6;

	head->ref = two;

	node* three = new node;
	three->data = 7;

	two->ref = three;

	three->ref = NULL;
	
	system("pause");
	return 0;
}

void addFunc(node* head)
{
	node* current = new node;
	current = head;
	current->data++;
	cout << current->data;
	do {current = current->ref; current->data++;}
	while (current->ref != NULL);
}

void Print(node* head)
{
	node* current = new node;
	current = head;
	//node* current = head;
	int i = 1;
	cout << "node 1: data = " << current->data << endl;
	do { i++; current = current->ref; cout << "node " << i << ": data = " << current->data << endl; }
	while (current->ref != NULL);
	cout << "end of list";
}