/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** The % operator, known as the “remainder” or the “modulus” operator, computes the
** remainder that results from dividing the left-hand operand by the right-hand operand.
*/

#include <iostream>
using namespace std;

int main() {
	int ival = 42;
	double dval = 3.14;
	cout << "ival % 12 = " << ival % 12 << endl;
	cout << "ival % dval = " << ival % (int)dval << endl;
	//cout << "ival % dval = " << ival % dval << endl;	//error: floating-point operand

	int ival2 = 21;
	cout << "21 % 6 = " << ival2 % 6 << endl;
	cout << "21 % 7 = " << ival2 % 7 << endl;
	cout << "-21 % -8 = " << (-ival2) % (-8) << endl;	//noticing!!!
	cout << "21 % -5 = " << ival2 % (-5) << endl;	//noticing!!!
	cout << "-21 % 5 = " << (-ival2) % 5 << endl; 	//noticing!!!

	return 0;
}

/*
**
** @Output
ival % 12 = 6
ival % dval = 0
21 % 6 = 3
21 % 7 = 0
-21 % -8 = -5
21 % -5 = 1
-21 % 5 = -1
**
*/