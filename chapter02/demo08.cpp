/*
naming conventions
*/

#include <iostream>

using namespace std;

	// int _ = 12;				//wrong, identifiers defined outside a function may not begin with an underscore

	// cout << _ << endl;

int main(){

	// int double = 3.14;		//wrong

	// cout << double << endl;

	int _ = 12;				//ok inside a function

	cout << _ << endl;

	// int catch-22 = 55;		//wrong , "-" is not allowed

	// cout << catch-22 << endl;

	// int 1_or_2 = 11;			//at the beginning, not a letter either an underscore

	// cout << 1_or_2 << endl;

	double Double = 3.14;	//ok, double is not Double

	cout << Double << endl;


	return 0;
}