/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Write a program to compare two strings. Now write a
** program to compare the values of two C-style character strings.
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	//use string
	string s1("weekend"), s2("yogurt");
	if (s1 == s2)
		cout << "weekend = yogurt" << endl;
	else if (s1 > s2)
		cout << "weekend > yogurt" << endl;
	else
		cout << "weekend < yogurt" << endl;

	cout << "=================" << endl;

	//use C-style character strings
	const char* cs1 = "little";
	const char* cs2 = "yellow";
	auto result = strcmp(cs1, cs2);
	if (result == 0)
		cout << "little = yellow" << endl;
	else if (result > 0)
		cout << "little > yellow" << endl;
	else 
		cout << "little < yellow" << endl;

	cout << endl;

	return 0;
}

/*
**
** @Output
weekend < yogurt
=================
little < yellow
**
*/

