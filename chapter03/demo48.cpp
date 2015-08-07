/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** array test
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while (*cp) {
    	cout << *cp << endl;
    	++cp;
	}

	return 0;
}

/*
**
** @Output
** This code will print all characters in ca, afterwards as no \0 appended, UB would happen. 
** For most cases, the while loop here won't be terminated as expected and many rubbish would be printed out.
h
e
l
l
o

**
*/

