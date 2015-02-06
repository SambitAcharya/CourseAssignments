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

	// Function to find the length of the string.

	int count = 0;
	while(*(str+count)!='\0')
		count++;

	return count;
}

char *strcpy(char *dest, const char *src)
{
   char *saved = dest;
   while (*src)
   {
       *dest++ = *src++;
   }
   *dest = 0;
   return saved;
}

int main() {

	char s[100] = "My name is sambit";
	char s2[100];
	int length;

	length = strlen(s);
	// cout << length << "\n";
	strcpy(s2,s);

	for (int i=0; i<=strlen(s2); i++)
		cout << *(s2+ i);

	return 0;
}
