/**

Write a function that takes an array of ints and its length as the arguments and
uses pointers to initialize the elements of the array to zero.
Return the array using a pointer. The function would be:  int *zero_array(int *a, int length)

*/

#include <iostream>
using namespace std;

int *zero_array(int *array, int length){

	// Function to set all the elements of the array to zero.

	for (int i = 0; i<length; i++)
		*(array+i) = 0;

	return array;
}

int main() {
	int length;

	cout << "Enter the length of the array. \n";
	cin >> length;

	int *array = new int[length];

	cout << "Enter the elements of the array. \n";
	for(int i=0;i<length;i++)
		cin >>  array[i];

	array = zero_array(array,length);

	cout << "Printing the elements after pointer manipulation.";

	for(int i=0;i<length;i++){
		cout << array[i];
		cout << "\n";
	}
	return 0;
}
