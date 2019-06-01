#include <iostream>
using namespace std;

class Box
{
public:
	Box(void){
		cout<<"Class is being created"<<endl;
	};
	~Box(){
		cout<<"Class is being deleted"<<endl;
	};
	
};

int main(int argc, char const *argv[])
{
	Box b1;
	cout<<"Hello world!!"<<endl;
	return 0;
}