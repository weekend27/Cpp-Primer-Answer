/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Using the increment operator, we can rewrite our program that changed the case of
** the first word in a string to use iterators instead
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// process characters in s until we run out of characters or we hit a whitespace
	string s("some codes");
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);
	cout << s << endl;

	return 0;
}

/*
**
** @Output
** SOME codes
**
*/