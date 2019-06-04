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
				Write code to partition a linked list around a value x, 
				such that all nodes less than x come before all nodes greater
				than or equal to x. If x is contained within the list, the value
				of x only need to be after the element less than x. The partition
				element x can appear anywhere in the "Right partition"; it does not
				need to apear between the leftand right portitions.

				EXAMPLE
				Input :  3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition = 5]
				Output : 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8

			A) Approach
				
		*/

		bool partition(int a){
			Node *n = this;
			Node left(-1);
			Node right(-1);
			while(n != NULL){
				if (n->data < a){
					left.appendToTail(n->data);
				}else{
					right.appendToTail(n->data);
				}
				cout<<n->data<<endl;
				n = n->next;
			}
			left.deleteNode(left.head, -1);
			right.deleteNode(right.head, -1);



			cout<<"elements in left are : "<<endl;
			left.display();

			cout<<"elements in right are : "<<endl;
			right.display();

			return false;
		}
		
};



int main(int argc, char const *argv[])
{
	Node n(3);
	n.appendToTail(5);
	n.appendToTail(8);
	n.appendToTail(5);
	n.appendToTail(10);
	n.appendToTail(2);
	n.appendToTail(1);

	n.display();
	cout<<endl;
	n.partition(4);
	
	return 0;
}


