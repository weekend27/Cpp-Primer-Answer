/*
type conversions
*/

#include <iostream>

using namespace std;

int main(){
	bool b = 42;
	cout << " b = " << b << endl;

	int i = b;
	cout << " i1 = " << i << endl;

	i = 3.14156;
	cout << " i2 = " << i << endl;

	double pi = i;
	cout << " pi = " << pi << endl;

	unsigned char c = -1;
	cout << " c = " << c << endl;

	//signed char c2 = 256;
	//cout << " c2 = " << c2 << endl;

	return 0;
}