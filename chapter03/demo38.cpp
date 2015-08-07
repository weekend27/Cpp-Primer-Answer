/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Write a program to define an array of ten ints. Give each
** element the same value as its position in the array
*/

#include <iostream>
using namespace std;

int main() {
	int i, a[10];
	for (i = 0; i != 10; i++)
		a[i] = i;
	//print a
	for (i = 0; i != 10; i++)
		cout << a[i] << " ";
	cout << endl;
	

	return 0;
}


/*
**
** @Output
0 1 2 3 4 5 6 7 8 9
**
*/