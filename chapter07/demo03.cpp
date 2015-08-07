
/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p.
** 256) to use these members.
*/

#include "demo02.cpp"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	Sales_data total;
	cout << "Please input your Sales_book message here :" << endl;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
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
13-FGHT-965 1 45
13-FGHT-965 1 45
13-HHUI-234 9 56
===============================
The Sales_book message last time : 
13-FGHT-965 2 90
===============================
The current Sales_book message is : 
13-HHUI-234 9 56
===============================
Please input your Sales_book message here :
===============================
The final Sales_book message: 
13-HHUI-234 9 56
===============================
**
*/