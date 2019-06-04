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
				Implement a function to check a linked list is pallindrone or not

			A) Approach
				Idea 1 ) Create a reverse linked list and compare it with the original (Currently Not working)
				Idea 2 ) Use doubly linked list to traverse back and forward simultaneusly for checking pallindrome.

		*/

		bool checkPallindrome(){
			Node *f = this;
			Node *r = this->tail;



			int flag = 1;

			while(f != NULL && r != NULL){
				if (r->data != f->data)
					flag = 0;
				r = r->previous;
				f = f->next;
			}

			if (flag){
				return true;
			}
			
			return false;
		}

};



int main(int argc, char const *argv[])
{
	Node n1(9);
	n1.appendToTail(8);
	n1.appendToTail(7);
	n1.appendToTail(6);
	n1.appendToTail(5);
	n1.appendToTail(4);
	n1.appendToTail(3);
	n1.appendToTail(2);
	n1.appendToTail(1);
	n1.appendToTail(2);
	n1.appendToTail(3);
	n1.appendToTail(4);
	n1.appendToTail(5);
	n1.appendToTail(6);
	n1.appendToTail(7);
	n1.appendToTail(8);
	n1.appendToTail(9);

	cout<<n1.checkPallindrome()<<endl;;
	
	return 0;
}


