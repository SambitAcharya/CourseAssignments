/**

Write a function that takes an array of ints and its length as the arguments and
uses pointers to initialize the elements of the array to zero.
Return the array using a pointer. The function would be:  int *zero_array(int *a, int length)

*/

#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the length of the array. \n";
	cin >> n;

	int *a = new int[n];

	cout << "Enter the elements of the array. \n";
	for(int i=0;i<n;i++){
		cin >>  a[i];
		cout << a[i];
		cout << "\n";
	}
	return 0;
}
