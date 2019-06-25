#include <iostream>
#include <math.h>
using namespace std;

int getBit(long int num, int i){
	return ((num & (1 << i)) != 0);
}

long int intToBinary(long int n){
	int len = 20;
	int arr[20];
	long int answer = 0;
	for (int i = 0; i < len; ++i){
		arr[i] = getBit(n, i);
	}
	for (int i = len-1; i >= 0; --i){
		answer = (answer*10)+arr[i];
		// cout<<arr[i];
	}
	return answer;
}


long int binaryToInt(long int n){
	long int answer = 0;
	long int counter = 0;
	while(n){
		int x = n%10;
		answer += pow(2, counter) * x;
		n = n/10;
		counter++;
	}
	return answer;
}

long int setBit(long int num, long int i){
	return num | (1 << i);
}

int clearBit(int num, int i){
	int mask = ~(1 << i);
	return num & mask;
}

long int updateBit(long int num, long int i, long int bitIs1){
	long int value = bitIs1 ? 1 : 0;
	long int mask = ~(1 << i);
	return (num & mask) | (value << i);
}

/*

	Question 5.6: 
	`````````````
	Conversion : Write a function to determine the number of bits you would 
	need to flip to convert integer A to integer B.

	EXAMPLE
	Input: 29 (or: 11101), 15 (or: 01111)
	Output: 2

*/

long int conversion(long int n1, long int n2){
	// cout<<intToBinary(n1)<<endl;
	// cout<<intToBinary(n2)<<endl;
	long int x1 = intToBinary(n1);
	long int x2 = intToBinary(n2);
	int counter = 0;
	while(x1 || x2){
		// cout<<"x1 : "<<x1%10<<endl;
		// cout<<"x2 : "<<x2%10<<endl;
		if(x1%10 != x2%10){
			counter++;
		}
		x1 = x1/10;
		x2 = x2/10;
	}

	// cout<<"Answer is : "<<counter<<endl;
	return counter;
}


int main(int argc, char const *argv[]){

	cout<<conversion(29, 15)<<endl;
	
	return 0;
}












