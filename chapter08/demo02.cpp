/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 8.2: Test your function by calling it, passing cin as an argument.
*/
#include <iostream>

using namespace std;

istream& func(istream &is)
{
	string buf;
	while (is >> buf)
		cout << buf << endl;
	is.clear();
	return is;
}

int main()
{
	istream& is = func(cin);
	cout << is.rdstate() << endl;
	return 0;
}

/*
**
** @Output
jjjjjjj
jjjjjjj
what network
what
network
yes
yes
hello world
hello
world
0
**
*/