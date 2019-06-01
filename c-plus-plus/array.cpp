#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// Array Initialisation
	int arr[10];
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5,5,6,7};


	for (int i = 0; i < 10; ++i){
		arr[i] = i+1;
	}

	for (int i = 0; i < 10; ++i){
		cout<<arr[i]<<endl;
	}

	cout<<endl;
	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); ++i)
	{
		cout<<arr1[i]<<endl;
	}

	cout<<endl;
	for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); ++i)
	{
		cout<<arr2[i]<<endl;
	}

	// Two Dimentional array

	int arr2d1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2d2[3][3] = {1,2,3,4,5,6,7,8,9};

	int arr2d3[3][3];

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			arr2d3[i][j] = i+j;
		}
	}
	
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			cout<<"arr2d1 : "<<arr2d1[i][j]<<"arr2d2 : "<<arr2d2[i][j]<<"arr2d3 : "<<arr2d3[i][j]<<endl;
		}
	}

	// Pointer and arrays

	int arrp[4] = {1,2,3,4};

	// Name of the array holds the address of the first element in the array. 
	// First element can be accessed by using the pointer array name, and 
	// Further elements can be accessed by using pointer arithmetics

	cout<<*arrp<<endl<<endl;


	// Using loop with pointer to arry

	for (int i = 0; i < sizeof(arrp)/sizeof(arrp[0]); ++i){
		cout<<*arrp+i<<endl;
	}


	return 0;
}