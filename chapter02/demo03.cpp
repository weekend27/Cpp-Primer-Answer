/*
expressions involving unsigned types
*/

#include <iostream>

using namespace std;

int main(){

	unsigned u1 = 42, u2 = 10;
	
	cout << u1 - u2 << endl;
	cout << u2 - u1 << endl;		//ok: but the result will wrap around

	return 0;
}