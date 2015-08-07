/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Predict the output of the following code and explain your
** reasoning. Now run the program. Is the output what you expected? If not,
** figure out why.
*/
#include <iostream>
using namespace std;

int main() {
	int x[10];
	int *p = x;
	cout << sizeof(x) << endl;
	cout << sizeof(*x) << endl;
	cout << sizeof(x)/sizeof(*x) << endl;

	cout << sizeof(p) << endl;
	cout << sizeof(*p) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;

	cout << "int:\t" << sizeof(int) << " bytes" << endl;

	return 0;
}


/*
**
** @Output
40
4
10
8
4
2
int:	4 bytes
**
*/