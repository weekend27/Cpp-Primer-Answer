/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.23: Write your own version of the Screen class.
*/

#include <string>

using namespace std;

class Screen
{
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht * wd, c) {}

	char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r*width+c]; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};


/*
**
** @Output

**
*/