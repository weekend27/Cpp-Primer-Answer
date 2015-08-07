/*
pointer to pointer
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	int ival = 1024;
	int *pt1 = &ival;
	int **pt2 = &pt1;

	cout << ival << endl;
	cout << *pt1 << endl;
	cout << **pt2 << endl;

	return 0;
}