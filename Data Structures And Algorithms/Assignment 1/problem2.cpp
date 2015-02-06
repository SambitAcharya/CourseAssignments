/**

Write a program for implementing each of the following functions (don’t use library string functions):
a. Compute the length of a string using pointers (int strlen(char *str))
b. Copy a string from one location to another (strcpy(char *src, char *dest))
c. Concatenate two strings ‘s’ and ‘t’ (char *strcat(char *s, char *t))
d. Returns 1 if the string t occurs at the end of string s, and otherwise returns 0
(int strend(char *s, char *t))
e. Print if the given string is a palindrome or not (void checkPalindrome(char *s))
f. Reverse a given string (char *reverse(char *original))

*/

#include <iostream>
using namespace std;

int strlen(char* str){

	int count = 0;
	while(*(str+count)!='\0')
		count++;

	return count;
}

int main() {

	char s[100];
	int length;

	cout << "Enter the string. \n";
	for (int i=0; i<=100;i++)
		cin >> s[i];

	length = strlen(s);
	cout << length;

	return 0;
}
