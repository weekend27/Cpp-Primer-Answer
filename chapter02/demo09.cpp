/*
nested scopes
*/

#include <iostream>

using namespace std;

int reused = 22;		//reused has global scope

int main(){

	int unique = 0;		//unique has block scope
	cout << reused << " " << unique << endl;	//22 0

	int reused = 11;
	cout << reused << " " << unique << endl;	//11 0

	cout << ::reused << " " << unique << endl;	//22 0

	return 0;
}