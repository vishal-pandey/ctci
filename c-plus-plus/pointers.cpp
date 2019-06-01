#include <iostream>
using namespace std;

// A pointer is a variable whose value is the address of another variable. 

int main(int argc, char const *argv[])
{
	int x = 26;
	int *p = &x;
	cout<<&x<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	cout<<*p<<endl;
	return 0;
}