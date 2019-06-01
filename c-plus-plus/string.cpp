#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str2[] = "Hello";

	int arr[] = {1,2,3,4,5};

	// In case of string name of array also represent whole string
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<*arr<<endl;


	// Function supported on string

	char str3[] = "Ram is a good boy";
	char str4[] = "Ram plays football";
	char str5[100];

	// String Copy
	strcpy(str5, str3);
	cout<<str5<<endl;

	// String concatination
	strcat(str5, str4);
	cout<<str5<<endl;

	// String Length
	cout<<strlen(str5)<<endl;

	// string compare
	cout<<strcmp(str3, str5)<<endl;

	// Character search
	cout<<*strchr(str5, 'p')<<endl;

	// String Search
	cout<<strstr(str5, str4)<<endl;


// Using String Class
	string str6 = "Vishal is great";
	string str7 = "Pandey is great";
	string str8;

	// String copy
	str8 = str7;
	cout<<str8<<endl;

	// String concatinate
	cout<<str6+str7<<endl;

	// String length
	cout<<str8.size()<<endl;


	return 0;
}