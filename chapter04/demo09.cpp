/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 4.13 What are the values of i and d after each assignment?
*/
#include <iostream>
using namespace std;

int main() {
	int i;
	double d;
	d = i = 3.5;
	cout << i << endl;
	cout << d << endl;

	i = d = 3.5;
	cout << i << endl;
	cout << d << endl;

	return 0;
}

/*
**
** @Output
3
3.0
3
3.5
**
*/