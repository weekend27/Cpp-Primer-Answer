/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** The type returned by begin and end depends on whether the object on which they
** operator is const. If the object is const, then begin and end return a
** const_iterator; if the object is not const, they return iterator
** cbegin() 
** cend()
*/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	vector<int> v;
	const vector<int> cv;		
	auto it1 = v.begin();		// it1 has type vector<int>::iterator
	auto it2 = cv.begin();		// it2 has type vector<int>::const_iterator
	auto it3 = v.cbegin();		// it3 has type vector<int>::const_iterator

	return 0;
}

/*
**
** @Output
** 
**
*/