/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** array test
*/

#include <iostream>

using namespace std;

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *p1 = arr;
	int *p2 = &arr[5];
	p1 += p2 - p1;

	cout << *p1 << endl;
	cout << *p2 << endl;
	
	return 0;
}

/*
**
** @Output
5
5
**
*/