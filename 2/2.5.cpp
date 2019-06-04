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
				Sum Lists : You have two numbers represented by a linked list.
				Where each node contains a single digit. The digits are stored
				inreverse order, such that the 1's digit is at the head of the
				list. Write a function that adds the two numbers and returns
				the sum as a linked list.

				EXAMPLE
				Input : (7 -> 1 -> 6) + (5 -> 9 -> 2). That is, 617 + 295.
				Output : 2 -> 1 -> 9. That is, 912.

			A) Approach
				Initialize the carry to be zero (0);
				Initialize a linked list for the answer
				Sum the corresponding element of the both linked list along with carry
				divide the sum by 10, append remainder to answer linked list
				and save the quotient as carry for the next iteration.

				For the "FOLLOW UP" use doubly linked list to back trace to add carry.

		*/

		

};

void sumnode(Node *n1, Node *n2){

	int carry = 0;

	Node ans(0);

	while(n1 != NULL && n2 != NULL){
		
		ans.appendToTail((n1->data + n2->data + carry)%10);
		carry = (n1->data + n2->data)/10; 

		n1 = n1->next;
		n2 = n2->next;
	}
	if (carry != 0){
		ans.appendToTail(carry);
	}
	ans.deleteNode(ans.head, 0);
	ans.display();
}


int main(int argc, char const *argv[])
{
	Node n1(9);
	n1.appendToTail(9);
	n1.appendToTail(9);

	Node n2(9);
	n2.appendToTail(9);
	n2.appendToTail(9);

	sumnode(&n1, &n2);

	
	return 0;
}


