/*
expressions involving unsigned types, for loop
*/

#include <iostream>

using namespace std;

int main(){

	for (unsigned u = 10; u >= 0; --u)		//wrong:u can never be less than 0; the condition will always succeed
		cout << u << endl;

	return 0;
}