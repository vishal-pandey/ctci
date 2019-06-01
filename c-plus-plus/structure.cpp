#include <iostream>
// #include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	struct Book
	{
		char name[100];
		char author[100];
		char subject[100];
		int id;
	};

	Book b1;
	b1.id = 123;
	strcpy(b1.author, "Vishal Pandey");
	strcpy(b1.name, "Maths book");
	strcpy(b1.subject, "Mathametics");



	cout<<"Book id : "<<b1.id<<endl;
	cout<<"Book name : "<<b1.name<<endl;
	cout<<"Book author : "<<b1.author<<endl;
	cout<<"Book subject : "<<b1.subject<<endl;

	return 0;
}