/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Consider a machine on which shorts are 16 bits. In that case, the
** maximum short is 32767. On such a machine, the following compound
** assignment overflows:
*/

#include <iostream>
using namespace std;

int main() {
	short short_value = 32767;
	short_value += 1;
	cout << "short_value = " << short_value << endl;

	return 0;
}

/*
**
** @Output
short_value = -32768
**
*/