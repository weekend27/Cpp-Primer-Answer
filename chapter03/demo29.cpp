/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Instead, as with size_type, the library types
** that have iterators define types named iterator and const_iterator that
** represent actual iterator types
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int>::iterator it1;	// it1 can read and write vector<int> elements
	string::iterator it2;
	vector<int>::const_iterator it3;
	string::iterator it4;

	return 0;
}

/*
**
** @Output
** 
**
*/