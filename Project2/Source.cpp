
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
	node head;
	head.data = 5;
	cout << head.data << endl;

	node two;
	two.data = 6;
	cout << two.data << endl;

	head.ref = &two;

	node three;
	three.data = 7;
	cout << three.data << endl;

	two.ref = &three;

	head.ref = &three;

	head.ref = &two;

	two.ref = &three;
	system("pause");
	return 0;
}

/*void addFunc(node head)
{
	node current = head;
	current.data++;
	while (current.ref != NULL) {
		current = current.ref;
		current.data++;
	}

}*/