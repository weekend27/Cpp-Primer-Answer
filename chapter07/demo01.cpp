/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.1: Write a version of the transaction-processing program from §
** 1.6 (p. 24) using the Sales_data class you defined for the exercises in §
** 2.6.1 (p. 72).
*/
#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data total;
	cout << "Please input your Sales_book message here :" << endl;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if (total.bookNo == trans.bookNo)
			{
				total.units_sold += trans.units_sold;
				total.revenue +=trans.revenue;
			}
			else
			{
				cout << "===============================" << endl;
				cout << "The Sales_book message last time : " << endl;
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				cout << "===============================" << endl;
				total = trans;
				cout << "The current Sales_book message is : " << endl;
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				cout << "===============================" << endl;
				cout << "Please input your Sales_book message here :" << endl;
			}
		}
		cout << "===============================" << endl;
		cout << "The final Sales_book message: " << endl;
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
		cout << "===============================" << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}

/*
**
** @Output
Please input your Sales_book message here :
12-FDSN-323 6 66
12-FDSN-323 6 66
12-FDSN-323 6 66
13-FGHT-965 1 45
===============================
The Sales_book message last time : 
12-FDSN-323 18 198
===============================
The current Sales_book message is : 
13-FGHT-965 1 45
===============================
Please input your Sales_book message here :
13-FGHT-965 1 45
13-FGHT-965 1 45
13-FGHT-963 4 34
===============================
The Sales_book message last time : 
13-FGHT-965 3 135
===============================
The current Sales_book message is : 
13-FGHT-963 4 34
===============================
Please input your Sales_book message here :
===============================
The final Sales_book message: 
13-FGHT-963 4 34
===============================
**
*/