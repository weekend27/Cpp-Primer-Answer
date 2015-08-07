/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.6: Define your own versions of the add, read, and print
** functions.
*/

#include <iostream>
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

//member functions
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
	   << item.revenue ;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}



/*
**
** @Output

**
*/