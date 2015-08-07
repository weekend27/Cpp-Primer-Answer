/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 4.25 What is the value of ~'q' << 6 on a machine with 32-bit
** ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the
** bit pattern 01110001?
*/
#include <iostream>
using namespace std;

int main() {
	long q = 01110001;
	cout << (~q << 6) << endl;
	cout << (2*2*2*2*2*2*2) << endl;

	return 0;
}


/*
**
** @Output
-19136640
**
*/