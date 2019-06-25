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
			Q) 2.2
				Implement an algorithm to find Kth to last element of a singly linked list.

			A) Approach
				Idea 1) Input K and start from head and check if the next of Kth element is NULL or not.
						If found NULL the present element is the Kth element from last

				Idea 2) Find the address last node and size of each node and traverse back.
				Not implemented yet.
		*/

		int findKLast(int k){
			Node *n = this;

			int knode;

			if (k == 0){
				while(n->next != NULL){
					n = n->next;
				}
				return n->data;
			}

			if (k == 1){
				while(n->next->next != NULL){
					n = n->next;
				}
				return n->next->data;
			}


			while(n->next != NULL){

				Node *m = n;

				int temp = k;
				while(temp>1){
					n = n->next;
					temp--;
				}

				if (n->next == NULL){
					n = m;
					return n->data;
				}
				n = m;
				n = n->next;
			}

			return -1;
		}

		
		
};


int main(int argc, char const *argv[])
{
	Node n(0);
	n.appendToTail(1);
	n.appendToTail(2);
	n.appendToTail(3);
	n.appendToTail(4);
	n.appendToTail(5);
	n.appendToTail(6);

	cout<<"Answer is "<<n.findKLast(5)<<endl;;
	return 0;
}


