/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 5.5 Using an if–else statement, write your own version of the
** program to generate the letter grade from a numeric grade.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	cout << "input your grade here : " << endl;
	int g;
	cin >> g;
	string letter;
	if (g < 60){
		letter = scores[0];
	}
	else{
		letter = scores[(g - 50) / 10];
		if (g != 100)
			letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
	}
	cout << letter << endl;
	return 0;
}


/*
**
** @Output

**
*/