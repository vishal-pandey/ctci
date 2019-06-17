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

	Question 5.1: 
	`````````````
	Flip Bit to Win: You have an integer and you can flip exactly one bit from 0 to a 1. write code to
	find the length if the longest sequence of 1s you could create.

	INPUT: 	1775		(or: 11011101111)
	OUTPUT:	8
 	

*/


int countMOnes(long int number){
	long int numCopy = number;

	int answer = 0;

	int counter = 0;

	while(numCopy){
		if (numCopy%10 == 1){
			counter++;
		}else if(numCopy%10 == 0){
			if (answer < counter)
			{
				answer = counter;
			}
			counter = 0;
		}
		numCopy = numCopy/10;
	}
	if (answer < counter)
	{
		answer = counter;
	}
	return answer;
}


int oneSequence(long int num){
	long int myNum = intToBinary(num);
	int maxone = 0;
	int counter = 0;
	while(myNum){
		if (myNum%10 == 0){
			long int numCopy = num;
			numCopy = setBit(numCopy, counter);
			// cout<<intToBinary(numCopy)<<endl;
			// cout<<endl<<endl<<countMOnes(intToBinary(numCopy))<<endl;
			// cout<<setBit(numCopy, counter)<<endl;
			// cout<<numCopy;
			if (maxone < countMOnes(intToBinary(numCopy))){
				maxone = countMOnes(intToBinary(numCopy));
			}
			// cout<<myNum%10<<endl;
		}
		myNum = myNum/10;
		counter++;
	}
	// cout<<myNum<<endl;
	return maxone;
}






int main(int argc, char const *argv[]){

	int num = 1779;
	cout<<oneSequence(num)<<endl;
	// cout<<intToBinary(5)<<endl;
	// cout<<setBit(101,1)<<endl;
	// cout<<countMOnes(11011101111)<<endl;
	return 0;
}












