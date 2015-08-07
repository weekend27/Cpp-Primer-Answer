/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 4.6 Write an expression to determine whether an int value is even or odd.
*/

#include <iostream>
using namespace std;

int main() {
	int ival1 = 31;
	int ival2 = 44;
	//remember to add () to ival & 0x1, otherwise it will report error. Because << has higher procedence than &
	cout << (ival1 & 0x1) << endl;		//odd
	cout << (ival2 & 0x1) << endl;		//even

	return 0;
}

/*
**
** @Output
1
0
**
*/