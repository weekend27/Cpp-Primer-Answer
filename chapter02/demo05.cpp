/*
expressions involving unsigned types, while loop
*/

#include <iostream>

using namespace std;

int main(){

	unsigned u = 11;
	while (u > 0){			//ok
		--u;
		cout << u << endl;
	}

	return 0;
}