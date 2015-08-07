/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.15: Add appropriate constructors to your Person class.
*/
#include <iostream>
#include <string>

using namespace std;

struct Person;
istream &read(istream&, Person&);

struct Person
{
	Person() = default;
	Person(const string sname, const string saddr);
	Person(istream &is){read(is, *this);}

	string name;
	string address;

	string get_name() const { return name; }
	string get_addr() const { return address;}
};

istream &read(istream &is, Person &person)
{
	return is >> person.name >> person.address;
}

ostream &print(ostream &os, const Person &person)
{
	return os << person.name << " " << person.address;
}


/*
**
** @Output

**
*/