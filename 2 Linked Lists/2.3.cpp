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
			while(n != NULL){
				cout<<n->data<<endl;
				n = n->next;
			}
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
			Q) 2.3
				Implement an algorithm to delete a node in the middle (i.e., any node but the 
				first and last node, not necessarily the exact middle) of a singly linked list, 
				given only access to that node.

			A) Approach
				Copy the next node over the current node.
				Function is outside class because inside class it has access to Head and Tail inside class.
		*/

		
};

bool deleteMiddle(Node *element){

	if (element == NULL || element->next == NULL){
		return false;
	}

	Node *next = element->next;
	element->data = next->data;
	element->next = next->next;
	return true;
}

int main(int argc, char const *argv[])
{
	Node n(0);
	n.appendToTail(1);
	n.appendToTail(2);
	n.appendToTail(3);
	n.appendToTail(4);
	n.appendToTail(5);
	n.appendToTail(6);

	n.display();
	deleteMiddle(n.next->next->next);
	cout<<endl;
	n.display();
	return 0;
}


