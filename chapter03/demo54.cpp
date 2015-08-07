/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** multidimensional array
** Write three different versions of a program to print the
elements of ia. One version should use a range for to manage the
iteration, the other two should use an ordinary for loop in one case using
subscripts and in the other using pointers. In all three programs write all the
types directly. That is, do not use a type alias, auto, or decltype to
simplify the code.
**
*/

#include <iostream>

using namespace std;

int main(){

	int ia[3][4] = 
	{
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};

	//range for
	for (const int(&row)[4] : ia){
		for (int col : row)
			cout << col << "\t";
		cout << endl;
	}
	cout << endl;

	//for loop
	for (size_t i = 0; i != 3; ++i){
		for (size_t j = 0; j != 4; ++j)
			cout << ia[i][j] << "\t";
		cout << endl;
	}
	cout << endl;

	//using pointers
	for (int(*row)[4] = ia; row != ia + 3; row++){
		for (int *col = *row; col != *row + 4; col++)
			cout << *col << "\t";
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

0	1	2	3	
4	5	6	7	
8	9	10	11	
**
*/