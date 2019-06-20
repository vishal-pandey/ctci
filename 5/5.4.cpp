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

	Question 5.4: 
	`````````````
	Next Number : Given a project integer, print the next smallest and the next largest number that have
	the same number of 1 bits in their binary representation.
 	

*/


int countOnesBin(long int n){
	int count = 0;
	// int counter = 0;
	while(n){
		if (n%10 == 1){
			count++;
		}
		n = n/10;
	}
	return count;
}

long int nextNumberSmall(long int number){
	long int binNumber = intToBinary(number);
	// cout<<"Number : "<<number<<endl;
	// cout<<binNumber<<endl;
	// cout<<countOnesBin(binNumber)<<endl;

	int ones = countOnesBin(binNumber);
	while(1){
		if(ones == countOnesBin(intToBinary(++number))){
			// cout<<intToBinary(number)<<endl;
			return number;
		}
	}
}



long int nextNumberLarge(long int number){
	
	// We can generate infinitely large number by using same number of one bit in binary
	// Eg. let say no. of ones is 3 i.e., 10101  
	// so next large no. would be
	// 11100
	// 111000
	// 1110000
	// 11100000
	// 111000000
	// 1110000000
	// ...........
	// just add 0s at the end ;-)

	return 0;
}







int main(int argc, char const *argv[]){

	cout<<nextNumberSmall(7)<<endl;
	// cout<<nextNumberLarge(1023)<<endl;
	// int n = 1100;
	// cout<<n<<endl;
	// cout<<binaryToInt(n)<<endl;
	return 0;
}












