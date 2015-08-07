/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Copy the array you defined in the previous exercise into another array.
*/

#include <iostream>
using namespace std;

int main() {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int i;
	int b[10];
	for (i = 0; i != 10; i++)
		b[i] = a[i];
	//print b
	for (i = 0; i != 10; i++)
		cout << b[i] << " ";
	cout << endl;

	return 0;
}


/*
**
** @Output
0 1 2 3 4 5 6 7 8 9
**
*/