/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Extend the program that assigned high pass, pass, and fail
** grades to also assign low pass for grades between 60 and 75 inclusive. Write
** two versions: One version that uses only conditional operators; the other
** should use one or more if statements. Which version do you think is easier
** to understand and why?
*/
#include <iostream>
using namespace std;

int main() {
	float finalgrade;
	cout << "input your finalgrade here: " << endl;
	cin >> finalgrade;
	cout << "Your finalgrade is " << ((finalgrade > 90) ? "high pass"
									:(finalgrade < 60) ? "fail"
									:(finalgrade < 75) ? "low pass"
									: "pass") << endl;

	return 0;
}

/*
**
** @Output

**
*/