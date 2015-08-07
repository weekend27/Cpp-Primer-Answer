/*
test 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	int *p;
	int i = 2;
	p = &i;

	if (p)
		cout << "i = 2" << endl;
	// else if(*p)
	// 	cout << "i = 0" << endl;
	else
		cout << "error!!!" << endl;

	return 0;
}