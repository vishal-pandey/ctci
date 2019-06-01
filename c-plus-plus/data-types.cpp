#include <iostream>
#define PI 3.14159
using namespace std;

extern int foo;

int main(int argc, char const *argv[])
{
	int i;
	float f;
	bool b;
	char ch;
	double d;
	// void v;
	wchar_t wch;

	const int LEN = 10;


	cout<<"Size of int : "<<sizeof(i)<<endl;
	cout<<"Size of float : "<<sizeof(f)<<endl;
	cout<<"Size of boolean : "<<sizeof(b)<<endl;
	cout<<"Size of char : "<<sizeof(ch)<<endl;
	cout<<"Size of double : "<<sizeof(d)<<endl;
	// cout<<sizeof(v)<<endl;
	// cout<<sizeof(wch)<<endl;




	typedef int vishal;
	vishal vish;
	vish = 12;
	cout<<vish<<endl;

	enum color
	{
		red,
		blue,
		green
	} c;

	color x = blue;
	cout<<x<<endl;



	return 0;
}