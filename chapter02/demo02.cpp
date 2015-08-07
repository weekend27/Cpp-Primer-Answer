/*
expressions involving unsigned types
*/

#include <iostream>

using namespace std;

int main(){

	unsigned u = 10;
	int i = -42;
	cout << i + i << endl;
	cout << u + i << endl;

	return 0;
}