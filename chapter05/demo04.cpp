/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.10: There is one problem with our vowel-counting program as
** we’ve implemented it: It doesn’t count capital letters as vowels. Write a
** program that counts both lower- and uppercase letters as the appropriate
** vowel—that is, your program should count both 'a' and 'A' as part of
** aCnt, and so forth.
*/
#include <iostream>
using namespace std;

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch){
		if (ch == 'a' || ch == 'A') ++aCnt;
		else if (ch == 'e' || ch == 'E') ++eCnt;
		else if (ch == 'i' || ch == 'I') ++iCnt;
		else if (ch == 'o' || ch == 'O') ++oCnt;
		else if (ch == 'u' || ch == 'U') ++uCnt;
	}
	cout << "Number of vowel a and A: \t" << aCnt << endl;
	cout << "Number of vowel e and E: \t" << eCnt << endl;
	cout << "Number of vowel i and I: \t" << iCnt << endl;
	cout << "Number of vowel o and O: \t" << oCnt << endl;
	cout << "Number of vowel u and U: \t" << uCnt << endl;

	return 0;
}


/*
**
** @Output
AEIOUaeiouhwjhalo   uuuoverse
Number of vowel a and A: 	3
Number of vowel e and E: 	4
Number of vowel i and I: 	2
Number of vowel o and O: 	4
Number of vowel u and U: 	5
**
*/