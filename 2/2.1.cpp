#include <iostream>
using namespace std;

class Node
{

	public:
		Node *next = NULL;
		Node *head;
		Node *tail;
		int data;
		Node(int d){
			data = d;
			head = this;
			tail = this;
		}

		void display(){
			Node *n = this;
			cout<<n->data<<endl;
			do{
				cout<<n->next->data<<endl;
				n = n->next;
			}while(n->next != NULL);
		}

		void appendToTail(int d){
			Node* end = (Node*) malloc(sizeof(Node));
			Node end1(d);
			*end = end1;
			Node *n = this;
			while (n->next != NULL){
				n = n->next;
			}
			n->next = end;
			tail = end;
		}

		Node* deleteNode(Node *head, int d){
			Node *n = head;

			if (n->data == d){
				return head;
			}

			while(n->next != NULL){
				if (n->next->data == d){
					n->next = n->next->next;
					return head;
				}
				n = n->next;
			}
			return head;

		}

		bool searchNode(Node *head, int d){
			Node *n = head;

			if (n->data == d){
				return true;
			}

			while(n->next != NULL){
				if (n->next->data == d){
					return true;
				}
				n = n->next;
			}
			return false;

		}
		

		/* 
			Q) 2.1
				Approach is to create new link list with only 
				unique elements and ignore already present in newly created link list
		*/

		Node deleteDuplicate(){
			Node *n = this;
			Node nn(n->data);

			while(n->next != NULL){
				if (!searchNode(nn.head, n->next->data)){
					nn.appendToTail(n->next->data);
				}
				n = n->next;
			}

			return nn;

		}
};


int main(int argc, char const *argv[])
{
	Node n(0);

	n.appendToTail(1);
	n.appendToTail(2);
	n.appendToTail(3);

	for (int i = 0; i < 10; ++i)
	{
		n.appendToTail(i);
	}

	n.deleteNode(n.head, 5);

	n.display();
	
	cout<<endl;
	cout<<endl;
	cout<<endl;

	Node uniqueList = n.deleteDuplicate();

	uniqueList.display();
	
	return 0;
}



/* 
	Idea for follow up
	``````````````````
	Take a variable pointer from tail and start checking 
	if it is present in linked list from start till the pointer 
	if found delete that and move pointer towards head and terminate at head.

*/

