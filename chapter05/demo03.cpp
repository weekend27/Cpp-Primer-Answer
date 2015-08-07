/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 5.9 Write a program using a series of if statements to count the
** number of vowels in text read from cin.
*/
#include <iostream>
using namespace std;

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch){
		if (ch == 'a') ++aCnt;
		else if (ch == 'e') ++eCnt;
		else if (ch == 'i') ++iCnt;
		else if (ch == 'o') ++oCnt;
		else if (ch == 'u') ++uCnt;
	}
	cout << "Number of vowel a: \t" << aCnt << endl;
	cout << "Number of vowel e: \t" << eCnt << endl;
	cout << "Number of vowel i: \t" << iCnt << endl;
	cout << "Number of vowel o: \t" << oCnt << endl;
	cout << "Number of vowel u: \t" << uCnt << endl;

	return 0;
}


/*
**
** @Output
asdf asufuieeeee uvnoooo aoaoaoaouauicicudjfkeufixnzjai
Number of vowel a: 	8
Number of vowel e: 	6
Number of vowel i: 	5
Number of vowel o: 	8
Number of vowel u: 	7
**
*/