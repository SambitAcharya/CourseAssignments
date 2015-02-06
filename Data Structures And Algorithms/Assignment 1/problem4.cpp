/**

4. Given a string of letters, you have to count the frequency of occurrence of each character in a newline terminated string by using an array of structures as following:
Initially no memory is allocated for any of the letters.
When you read a character, in case the character has already occurred in the string before, you just have to simply increase the count of that character in the array.
When you read a character, in case the character is occurring in the string for the first time, you have to allocate a structure "node" dynamically with the "element" field initialized to the current character and the "count" field initialized to 1. You

Your task is to print the count of each of the character by the above method. An example:

Sample Input:
ccbbbbaaccaaz (

Sample Output:
c 4
b 4
a 4
z 1
   1
( 1
Notice that space character has occured once in the input above (look at the outline line with bold 1).

*/

#include <iostream>
#include <string>
using namespace std;

class CharacterCount{

	public:
		char name;
		int count;
};

int main() {

	string sentence;
	getline(cin,sentence);

	int length = sentence.size();
	for(string::iterator i=sentence.begin(); i!=sentence.end();i++){
		cout << *i << endl;
	}
	return 0;
}
