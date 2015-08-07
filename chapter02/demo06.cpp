/*
expressions involving unsigned types
*/

#include <iostream>

using namespace std;

int main(){

	unsigned u1 = 10, u2 = 42;
	cout << u2 - u1 << endl;		//32
	cout << u1 - u2 << endl;		//4294967264

	int i1 = 10, i2 = 42;
	cout << i2 - i1 << endl;		//32
	cout << i1 - i2 << endl;		//-32

	cout << i1 - u1 << endl;		//0
	cout << u1 - i1 << endl; 		//0

	return 0;
}