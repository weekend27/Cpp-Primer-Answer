/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** rewrite the program from § 3.2.3 (p. 94) that capitalized the
** first character of a string using an iterator instead of a subscript
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s("some codes");
	if (s.begin() != s.end()){	//make sure s is not empty
		auto it = s.begin();
		*it = toupper(*it);
	}

	cout << s << endl;

	return 0;
}

/*
**
** @Output
** Some codes
**
*/