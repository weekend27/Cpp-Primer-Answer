/*
reference to pointer
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	int i = 1024;
	cout << i << endl;
	
	int *p;
	int *&r = p;	//r is a reference to the pointer p
	r = &i;
	*r = 10;		//change i to 10

	cout << i << endl;

	return 0;
}