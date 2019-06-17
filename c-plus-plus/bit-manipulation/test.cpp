#include <iostream>
using namespace std;

int getBit(int num, int i){
	return ((num & (1 << i)) != 0);
}

void intToBinary(int n){
	int arr[10];
	for (int i = 0; i < 10; ++i){
		arr[i] = getBit(n, i);
	}
	for (int i = 9; i >= 0; --i){
		cout<<arr[i];
	}
}

int setBit(int num, int i){
	return num | (i << i);
}

int clearBit(int num, int i){
	int mask = ~(1 << i);
	return num & mask;
}

int updateBit(int num, int i, int bitIs1){
	int value = bitIs1 ? 1 : 0;
	int mask = ~(1 << i);
	return (num & mask) | (value << i);
}



int main(int argc, char const *argv[])
{	
	int x = 50;

	// cout<<endl;
	// intToBinary(x);
	// x = setBit(x, 1);
	// cout<<endl;
	// intToBinary(x);
	// cout<<endl;
	// x = clearBit(x, 1);
	// intToBinary(x);
	// cout<<endl;
	// x = updateBit(x, 1, 1);
	// intToBinary(x);
	// cout<<endl;
	// cout<<endl;
	
	BitM bit(6);
	bit.displayNumber();

	return 0;
}



