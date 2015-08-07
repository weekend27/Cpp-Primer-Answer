/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.6: Explain the differences between a parameter, a local variable,
** and a local static variable. Give an example of a function in which each
** might be useful.
*/

#include <iostream>
#include "chapter06.h"
using namespace std;

int main(){
	for (size_t i = 0; i != 10; ++i)	// i is a local variable
		cout << count(i) << endl;
}

size_t count (int n){	// n is a parameter
	static size_t ctr = 0; // ctr is a local static variable(object)
	ctr += n;
	return ctr;
}

/*
**
** @Output
0
1
3
6
10
15
21
28
36
45
**
*/