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
	node head ;
	head.data = 5;

	node two;
	two.data = 6;

	head.ref = &two;

	node three;
	three.data = 7;

	two.ref = &three;

	three.ref = NULL;

	system("pause");
	return 0;
}

void addFunc(node head)
{
	node current = head;
	current.data++;
	while (current.ref != NULL) {
		current = current.ref;
		current.data++;
	}

}
void Print(node head)
{
	node current = head;
	int i = 1;
	cout << "node 1: data = " << current.data << endl;
	while (current.ref != NULL)
	{
		i++;
		current = current.ref;
		cout << "node " << i << ": data = " << current.data << endl;
}