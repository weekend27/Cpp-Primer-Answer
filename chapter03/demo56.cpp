/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** multidimensional array
** Rewrite the programs again, this time using auto.
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
	for (auto& p : ia){
		for (int q : p)
			cout << q << "\t";
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
	for (auto p = ia; p != ia + 3; p++){
		for (int *q = *p; q != *p + 4; q++)
			cout << *q << "\t";
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