#include <iostream>
using namespace std;

class Node
{

	public:
		Node *next = NULL;
		int data;
		Node(int d){
			data = d;
		}

		void appendToTail(int d){
			Node* end = (Node*) malloc(sizeof(Node));
			Node end1(d);
			*end = end1;
			Node *n = this;
			while (n->next != '\0'){
				n = n->next;
			}
			n->next = end;
			// cout<<"Added "<<n->next->data<<" Exiting Function"<<endl<<endl;
		}
};


int main(int argc, char const *argv[])
{
	Node n(1);
	

	for (int i = 0; i < 10; ++i)
	{
		n.appendToTail(i);
	}


	Node *x = n.next;

	while(x != NULL){
		cout<<x->data<<endl;
		x = x->next;
	}
	

	return 0;
}