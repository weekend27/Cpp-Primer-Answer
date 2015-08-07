/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.40: Choose one of the following abstractions (or an abstraction
** of your own choosing). Determine what data are needed in the class. Provide
** an appropriate set of constructors. Explain your decisions.
** (a) Book
** (b) Date
** (c) Employee
** (d) Vehicle
** (e) Object
** (f) Tree
*/

#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	Book(unsigned isbn, string const& name, string const& author, string const& pubdate)
		:isbn_(isbn), name_(name), author_(author), pubdate_(pubdate)
	{ }

	explicit Book (istream &in)
	{
		in >> isbn_ >> name_ >> author_ >> pubdate_;
	}

private:
	unsigned isbn_;
	string name_;
	string author_;
	string pubdate_;
};


// int main(){
// 	return 0;
// }

/*
**
** @Output

**
*/