/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 8.1: Write a function that takes and returns an istream&. The
** function should read the stream until it hits end-of-file. The function should
** print what it reads to the standard output. Reset the stream so that it is valid
** before returning the stream.
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
	cout << func(cin) << endl;
	return 0;
}

/*
**
** @Output
helloworld
helloworld
hahahhahhaha
hahahhahhaha
zero
zero
0x6020d0
**
*/