/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.32: Define your own versions of Screen and Window_mgr in
** which clear is a member of Window_mgr and a friend of Screen.
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = vector<Screen>::size_type;
	inline void clear(ScreenIndex);

private:
	vector<Screen> screens;
};

class Screen
{
	friend void Window_mgr::clear(ScreenIndex);

public:
	using pos = string::size_type;

	Screen() = default; //1
	Screen(pos ht, pos wd):height(ht),width(wd),contents(ht * wd, ' ') {} //2
	Screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht * wd, c) {} //3

	char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r*width+c]; }
    inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos c, char ch);

    const Screen& display(ostream &os) const {do_display(os); return *this; }
    Screen& display(ostream &os) {do_display(os); return *this; }

private:
	void do_display(ostream &os) const { os << contents;}

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

inline void Window_mgr::clear(ScreenIndex i)
{
	if (i >= screens.size()) return;
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

inline Screen& Screen::move(pos r, pos c)
{
	cursor = r*width + c;
	return *this;
}

inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
	contents[r*width+c] = ch;
	return *this;
}

// int main(){
// 	return 0;
// }

/*
**
** @Output

**
*/