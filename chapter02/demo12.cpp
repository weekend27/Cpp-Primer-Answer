/*
reference
*/

#include <iostream>

using namespace std;

int main(){

	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	r2 = 3.1415926;
	cout << i << " " << r1 << " " << d << " " << r2 << endl;	//0 0 3.1415926 3.1415926

	r2 = r1;
	cout << i << " " << r1 << " " << d << " " << r2 << endl;	//0 0 0 0

	i = r2;
	cout << i << " " << r1 << " " << d << " " << r2 << endl;	//0 0 0 0

	r1 = d;
	cout << i << " " << r1 << " " << d << " " << r2 << endl;	//0 0 0 0

	//ex_2.17
	int j, &rj = j;
	j = 5;
	rj = 10;
	cout << j << " " << rj << endl;

	return 0;
}