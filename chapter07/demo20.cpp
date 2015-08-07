/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.27: Add the move, set, and display operations to your
** version of Screen. Test your class by executing the following code:
*/

#include "demo19.cpp"

int main()
{
	Screen myScreen(5, 5, 'C');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
}

/*
**
** @Output

**
*/