#include <iostream>
using namespace std;

class Node
{

	public:
		Node *next = NULL;
		Node *previous = NULL;
		Node *head;
		Node *tail;
		int data;

		Node(int d){
			data = d;
			head = this;
			tail = this;
		}
		Node(){
			data = '\0';
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
			end->previous = n;
			n->next = end;

			tail = end;
		}

		Node* deleteNode(Node *head, int d){
			Node *n = head;

			if (n->data == d){
				n->data = n->next->data;
				n->next = n->next->next;
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
			Q) 2.4
				Given two (Singly) linked list, determine if the two list intersect. Return the intersecting node.
				Note that the intersection is defined based on reference, not value.
				That is, if the kth node of the first linked list is the exact same node (by reference) 
				as the jth node of the second list, then they are intersecting.

			A) Approach
				

		*/

		
};



int main(int argc, char const *argv[])
{
	Node n1(9);
	n1.appendToTail(8);
	n1.appendToTail(7);
	
	
	return 0;
}


