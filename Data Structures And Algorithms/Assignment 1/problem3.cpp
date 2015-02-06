/**

  Write a program to find the number of times that a given word(i.e. a short string) occurs in a sentence (i.e. a long string!).
  Read data from standard input. The first line is a single word, which is followed by general text on the second line.
  Read both up to a newline character, and insert a terminating null before processing.
  Typical output should be:
  The word is "the".
  The sentence is "the cat sat on the mat".
  “the” occured 2 times.

*/

#include <iostream>
#include <string>
using namespace std;

int countWord(string sentence,string word){

	int index = 0,count = 0;
	index = sentence.find(word,index);

	while (index!=string::npos){
		index+=1;
		index = sentence.find(word,index);
		count+=1;
	}

	return count;
}
int main() {

	string sentence;
	getline(cin,sentence);

	string word;
	getline(cin,word);

	int count = countWord(sentence,word);

	cout << count << endl;
}
