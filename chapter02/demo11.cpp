/*
reference
*/

#include <iostream>

using namespace std;

int main(){

	int ival = 141024;
	int &refVal = ival;
	//int &refVal2;		//error: a reference must be initialized

	cout << refVal << endl;		//141024

	refVal = 0;
	cout << ival << endl;		//0

	int &refVal3 = refVal;
	cout << refVal3 << endl;	//0

	int i = refVal3;
	cout << i << endl;			//0

	// int &refVal4 = 10;		//error: initializer must be an object
	// cout << refVal4 << endl;

	// double &refVal5 = ival;	//error: initializer must be an int object
	// cout << refVal5 << endl;

	int j = 3.01;				//truncated
	cout << j << endl;

	return 0;
}