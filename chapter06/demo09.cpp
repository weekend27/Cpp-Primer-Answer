/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.21: Write a function that takes an int and a pointer to an int
** and returns the larger of the int value or the value to which the pointer
** points. What type should you use for the pointer?
*/
#include <iostream>
#include "chapter06.h"
using namespace std;

int main(){
	int a = 8, b = 4;
	int larger = compare(a, &b);
	cout << "The larger one is : " << larger << endl;

	return 0;
}

int compare(const int i, const int* j){
	return (i > *j) ? i : *j;
}

/*
**
** @Output

**
*/