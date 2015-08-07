/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** multidimensional array
** print the value of each element in array, with each inner array on its own line
*/

#include <iostream>

using namespace std;

int main(){

	int ia[3][4] = {{0, 1, 2, 3},{4, 5, 6, 7},{8, 9, 10, 11}};
	//first way to print
	for (auto p = ia; p != ia + 3; p++){
		for (auto q = *p; q != *p + 4; q++)
			cout << *q << "\t";
		cout << endl;
	}
	//second way to print
	for (auto p = begin(ia); p != end(ia); ++p) {
       	for (auto q = begin(*p); q != end(*p); ++q)
           cout << *q << '\t';   // prints the int value to which q points
   		cout << endl;
	}

	return 0;
}

/*
**
** @Output
0	1	2	3	
4	5	6	7	
8	9	10	11
0	1	2	3	
4	5	6	7	
8	9	10	11
**
*/