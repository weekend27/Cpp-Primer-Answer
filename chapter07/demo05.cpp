/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.5: Provide operations in your Person class to return the name
** and address. Should these functions be const? Explain your choice.

//  1. add public access modifier for the function members
//  2. use trailing return type 
//  3. change return type from string to string const&, for better performance.
*/

#include <string>

using namespace std;

class Person
{
	string name;
	string address;
public:
	auto get_name() const -> string const& { return name; }
	auto get_addr() const -> string const& { return address;}
};

int main(){
	return 0;
}

/*
**
** @Output

**
*/