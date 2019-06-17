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

int setBit(int num, int i){
	return num | (i << i);
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

	Question 5.1: 
	`````````````
	
	Insertion : You are given two 32-bit numbers, N and M, and two bit position, i and j. Write a method
	to insert M into N such that M starts at bit j and end at bit i. You can assume that the bits j through
	i have enough space to fit all of M. That is, if M = 10011, you can assume that there are at least 5 
	bits between j and i. You would not, for example, have j = 3 and i = 2, because M could not fully fit 
	between bit 3 and 2.
	
	EXAMPLE
	````````
	Input : N = 10000000000, M = 10011, i = 2, j = 6
	Output : N = 10001001100

*/


// i in question is x here
int insertMN(long int N, long int M, int x, int j){
	int myNum = binaryToInt(N);
	long int mm = myNum<<1;
	mm = intToBinary(mm);

	int counter = x;
	while(M){
		int b = M%10;
		// cout<<b<<endl;
		M = M/10;
		myNum = updateBit(myNum, counter, b);
		counter++;
	}
	cout<<intToBinary(myNum)<<endl;
	return 0;
}

int main(int argc, char const *argv[]){

	insertMN(10000000000, 10011, 2, 6);
	return 0;
}












