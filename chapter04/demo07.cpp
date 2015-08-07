/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 4.9 Explain the behavior of the condition in the following if:
*/

#include <iostream>
using namespace std;

int main() {
	const char *str = "Hello, weekend27";
	//const char *str = "";	//nullptr
	if (*str && str)
		cout << "All true!!!" << endl;
	else
		cout << "Not all true!!!" << endl;

	return 0;
}

/*
**
** @Output
str is a pointer to const char *, and it's not a nullptr. true.
*str is a const char: 'H', and it is explicit a nonzero value. true.
true && true -> true.
**
*/