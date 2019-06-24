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

	Question 5.5: 
	`````````````
	Debugger : Explain what the following code does: (n & (n-1) == 0)

 	Solution : in binary it check that if there exceeds length count of the number of its previous value
 	which in tern happen number exceeds the threshold of 2^k

 	Ans : This checks that if the number is a power of 2 or not.

*/

void check(int n){
	cout<<"n "<<n<<endl;
	cout<<"n binary "<<intToBinary(n)<<endl;
	cout<<"(n-1) "<<(n-1)<<endl;
	cout<<"(n-1) binary "<<intToBinary(n-1)<<endl;
	cout<<"(n & (n-1)) binary "<<intToBinary(n & (n-1))<<endl;
	cout<<"(n & (n-1)) decimal "<<(n & (n-1))<<endl;
	cout<<endl;
	// cout<<(n & (n-1))<<endl;
}

int debugger(int n){
	return ((n & (n-1)) == 0);
}

int main(int argc, char const *argv[]){

	for (int i = 1; i <= 1024; ++i)
	{
		if (debugger(i))
		{
			cout<<i<<endl;
		}
	}
	return 0;
}












