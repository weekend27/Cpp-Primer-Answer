/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** The following expression fails to compile due to operator
** precedence. Using Table 4.12 (p. 166), explain why it fails. How would you
** fix it?
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "word";
	string p = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout << p << endl; 

	return 0;
}


/*
**
** @Output
words
**
*/