#include <iostream>
using namespace std;


class Vishal
{
	public:
		int x;
		int y;

		int sum(){
			return this->x + this->y + this->a;
		}
		int sum1();

	private:
		int a = 10;
	protected:
		int pro = 1000;
	
};

class Pandey:Vishal
{
public:
	int Ppro = pro;
	
};

int Vishal::sum1(){
	return this->x + this->y;
}

int main(int argc, char const *argv[])
{
	Vishal v;
	Pandey p;
	v.x = 10;
	v.y = 20;
	cout<<v.sum()<<endl;
	cout<<v.sum1()<<endl;
	cout<<p.Ppro<<endl;
	return 0;
}

// public : can be accessed anywhere
// private : can be accessed within the class only
// protected : can be accessed within the class and child class