/*
pointer
*/

#include <iostream>

using namespace std;

int main(){

	int i = 42;
	int &r = i;
	int *p;
	p = &i;
	*p = 233;
	int &r2 = *p;

	cout << *p << " " << i << endl;	//233 233

	return 0;
}