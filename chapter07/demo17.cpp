/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.24: Give your Screen class three constructors: a default
** constructor; a constructor that takes values for height and width and 
** initializes the contents to hold the given number of blanks; and a constructor
** that takes values for height, width, and a character to use as the contents of
** the screen.
*/

#include <string>

using namespace std;

class Screen
{
public:
	using pos = string::size_type;

	Screen() = default; //1
	Screen(pos ht, pos wd):height(ht),width(wd),contents(ht * wd, ' ') {} //2
	Screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht * wd, c) {} //3

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