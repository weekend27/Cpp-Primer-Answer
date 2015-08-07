/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.13: Rewrite the program from page 255 to use the istream
** constructor.
*/

#include "demo11.cpp"

int main()
{
	Sales_data total(cin);
	if (!total.isbn().empty())
	{
		istream &is = cin;
		while (is)
		{
			Sales_data trans(is);
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout,total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
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

**
*/