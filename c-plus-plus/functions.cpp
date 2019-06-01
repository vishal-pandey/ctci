#include <iostream>
using namespace std;

// Function declaration 
int sum(int a, int b);

// Call By Value
void swap1(int x, int y);

// Call By Pointer
void swap2(int *x, int *y);

// Call By Address
void swap3(int &x, int &y);

// Call By Reference
void swap4(int& x, int& y);

int main(int argc, char const *argv[])
{

	int x = 100, y = 200;

	swap1(x, y);
	cout<<"X : "<<x<<" Y : "<<y<<endl;

	swap2(&x, &y);
	cout<<"X : "<<x<<" Y : "<<y<<endl;

	swap3(x, y);
	cout<<"X : "<<x<<" Y : "<<y<<endl;

	swap4(x, y);
	cout<<"X : "<<x<<" Y : "<<y<<endl;

	// printf("%d\n", sum(2,3));
	return 0;
}

// Function Defination
int sum(int x, int y){
	return x+y;
}

void swap1(int a, int b){
	int temp;

	temp = a;
	a = b;
	b = temp;
	return ;
}

void swap2(int *a, int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	return;

}

void swap3(int &a, int &b){
	int temp;

	temp = a;
	a = b;
	b = temp;

	return;
}

void swap4(int& a, int& b){
	int temp;

	temp = a;
	a = b;
	b = temp;
	return;
}