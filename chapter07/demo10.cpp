/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.11: Add constructors to your Sales_data class and write a
** program to use each of the constructors.
** test file
*/

#include "demo09.cpp"

int main()
{
	Sales_data item1;
	print(cout, item1) << endl;

	Sales_data item2("0-203-98743-R");
	print(cout, item2) << endl;

	Sales_data item3("0-203-98743-R", 5, 40.00);
	print(cout, item3) << endl;

	Sales_data item4(cin);
	print(cout, item4) << endl;

	return 0;
}

/*
**
** @Output
 0 0
0-203-98743-R 0 0
0-203-98743-R 5 200
0-203-98743-R 4 35
0-203-98743-R 4 140
**
*/