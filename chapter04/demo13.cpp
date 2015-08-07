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
#include <string>
using namespace std;

int main() {
	float finalgrade;
	string grade_class = "";
	cout << "input your finalgrade here: " << endl;
	cin >> finalgrade;

	if (finalgrade > 90)
		grade_class = "high pass";
	else if (finalgrade >= 75)
		grade_class = "pass";
	else if (finalgrade >= 60)
		grade_class = "low pass";
	else
		grade_class = "fail";

	cout << "Your finalgrade is " << grade_class << endl;

	return 0;
}


/*
**
** @Output

**
*/