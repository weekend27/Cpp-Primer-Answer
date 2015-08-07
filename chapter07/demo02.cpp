/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.2: Add the combine and isbn members to the Sales_data
** class you wrote for the exercises in § 2.6.2 (p. 76).
*/

#include <string>

using namespace std;

struct Sales_data
{
	string isbn() const{return bookNo;}
	Sales_data& combine(const Sales_data&);

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}


/*
**
** @Output

**
*/