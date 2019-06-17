#include <iostream>
using namespace std;
#define V_NULL -12345

/* 
	Stack : LIFO (Last In First Out)
	pop()
	push(item)
	peek()
	isEmpty()

	Here We have implemented Stack using linked list.
*/
class Stack
{
	public:
		Stack *next = NULL;
		Stack *previous = NULL;

		Stack *head;
		Stack *tail;
		int data;
		Stack(){
			data = V_NULL;
			head = this;
			tail = this;
		};
		Stack(int d){
			data = d;
			head = this;
			tail = this;
		}


		void display(){
			Stack *n = this->tail;
			while(n != NULL && n->data != V_NULL){
				cout<<n->data<<endl;
				n = n->previous;
			}
		}

		void push(int d){
			Stack* end = (Stack*) malloc(sizeof(Stack));
			Stack end1(d);
			*end = end1;
			Stack *n = this;
			while (n->next != NULL){
				n = n->next;
			}
			end->previous = n;
			n->next = end;

			tail = end;
		}

		int pop(){
			Stack *s = this->tail;
			int item = 0;
			s->previous->next = NULL;
			s->tail = s->previous;
			cout<<s->tail<<endl;
			cout<<s->previous->next<<endl;
			cout<<s->next<<endl;
			return item;
		}

	
};

int main(int argc, char const *argv[])
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(2);
	s.display();
	cout<<endl;
	// cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<endl;
	s.display();
	cout<<endl;
	// cout<<s.pop()<<endl;
	// s.display();
	return 0;
}