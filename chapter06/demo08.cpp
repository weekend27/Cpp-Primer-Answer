/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210)
** to use references instead of pointers to swap the value of two ints. Which
** version do you think would be easier to use and why?
*/
#include <iostream>
#include "chapter06.h"
using namespace std;

int main(){
	size_t a = 3, b = 4;
	cout << "before swap:" << endl;
	cout << "a = " << a << " b = " << b << endl;
	swap (a, b);
	cout << "after swap:" << endl;
	cout << "a = " << a << " b = " << b << endl;
}

void swap(size_t& i, size_t& j){
	size_t temp;
	temp = i;
	i = j;
	j = temp;
}


/*
**
** @Output
before swap:
a = 3 b = 4
after swap:
a = 4 b = 3
**
*/