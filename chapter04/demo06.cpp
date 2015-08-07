/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 4.7 What does overflow mean? Show three expressions that will overflow.
*/

#include <iostream>
using namespace std;

int main() {
	short short_value = 32767;
	short_value += 1;
	cout << "short_value = " << short_value << endl;

	unsigned short unsigned_short_value = 65535;
	unsigned_short_value += 1;
	cout << "unsigned_short_value = " << unsigned_short_value << endl;

	unsigned int ival = 0;
	ival -= 1;
	cout << "ival = " << ival << endl;

	return 0;
}

/*
**
** @Output
short_value = -32768
unsigned_short_value = 0
ival = 4294967295
**
*/