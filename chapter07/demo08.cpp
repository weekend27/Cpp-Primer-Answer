/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.9: Add operations to read and print Person objects to the code
** you wrote for the exercises in § 7.1.2 (p. 260).
*/
#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string name;
	string address;

	auto get_name() const -> string const& { return name; }
	auto get_addr() const -> string const& { return address;}
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