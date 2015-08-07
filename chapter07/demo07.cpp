/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p.
** 256) to use these members.
*/

#include "demo06.cpp"

using namespace std;


int main()
{
	Sales_data total;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, total))
		{
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