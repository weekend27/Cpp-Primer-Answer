/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.11: Modify our vowel-counting program so that it also counts the
** number of blank spaces, tabs, and newlines read.
*/
#include <iostream>
using namespace std;

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
			 blankSpaceCnt = 0, tabCnt = 0, newlineCnt = 0, otherCnt = 0;
	char ch;
	while (cin >> noskipws >> ch){
		switch(ch){
			case ('a'):
			case ('A'):
				++aCnt;
				break;
			case ('e'):
			case ('E'):
				++eCnt;
				break;
			case ('i'):
			case ('I'):
				++iCnt;
				break;
			case ('o'):
			case ('O'):
				++oCnt;
				break;
			case ('u'):
			case ('U'):
				++uCnt;
				break;
			case (' '):
				++blankSpaceCnt;
				break;
			case ('\t'):
				++tabCnt;
				break;
			case ('\n'):
				++newlineCnt;
				break;
			default:
				++otherCnt;
				break;
		}
	}
	cout << "Number of vowel a and A: \t" << aCnt << endl;
	cout << "Number of vowel e and E: \t" << eCnt << endl;
	cout << "Number of vowel i and I: \t" << iCnt << endl;
	cout << "Number of vowel o and O: \t" << oCnt << endl;
	cout << "Number of vowel u and U: \t" << uCnt << endl;
	cout << "=================================" << endl;
	cout << "Number of blank spaces : \t" << blankSpaceCnt << endl;
	cout << "Number of tabs: \t\t" << tabCnt << endl;
	cout << "Number of newlines:\t\t" << newlineCnt << endl;
	cout << "Number of other chracters:\t" << otherCnt << endl;

	return 0;
}


/*
**
** @Output
uaisweoAAUUU   
UUUUUooo	
  infalpp[1234
 as rtyu
jk
il
a
Number of vowel a and A: 	6
Number of vowel e and E: 	1
Number of vowel i and I: 	3
Number of vowel o and O: 	4
Number of vowel u and U: 	10
==============================
Number of blank spaces : 	7
Number of tabs: 		1
Number of newlines:		7
Number of other chracters:	19
**
*/