#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* ref;
};

void Print(node* head);
void IncrementAll(node* head);

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
	
	Print(head);
	IncrementAll(head);
	Print(head);

	system("pause");
	return 0;
}

void IncrementAll(node* current)
{
	do { 
		current->data++;
		current = current->ref;
	}
	while (current != NULL);
}

void Print(node* current)
{
	int i = 0;
	do {
		cout << "node " << i++  << ": data = " << current->data << endl;
		current = current->ref;
	}
	while (current!= NULL);
	cout << "end of list" << endl;
}