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

char *strcpy(char *dest, const char *src){

   // Function to copy one string to another string.

   char *saved = dest;
   while (*src){
       *dest++ = *src++;
   }
   *dest = 0;
   return saved;
}

char *strcat(char *s, char *t){

	// Function to concantenate a string at the end to another string.

	int c,d;
	c = strlen(s);
 	d = 0;

   while (t[d] != '\0') {
      *(s+c) = *(t+d);
      d++;
      c++;
   }

   s[c] = '\0';
}

int strend(char *s, char *t){

	int len_s = strlen(s);
	int len_t = strlen(t);

	if (len_t>len_s)
		return 0;

	int i = 0,ans=1;
	while(1){

		if( *(s-len_t+i) != *(t+i) ){
			ans = 0;
			break;
		}
		i++;
	}
	return ans;
}

void checkPalindrome(char *s){

	int i,j,flag=1;
	int len = strlen(s);
 	for(i=0,j=len-1;i<len/2;++i,--j){
  		if(s[j]!=s[i])
  		flag=0;
  	}
 	 if (flag)
 	 	cout << "Given string is a palindrome." << endl;
	 else
	 	cout << "Given string is not a palindrome." << endl;
	}

int main() {

	char s[] = "My name is Sambit";
	char s2[100];
	char s3[] = "Acharya";
	char s4[] = "maDaam";
	int length;

	length = strlen(s);
	// cout << length << endl;
	strcpy(s2,s);

	strcat(s,s3);

	// cout << strend(s,s3) << endl;

	checkPalindrome(s4);

	return 0;
}
