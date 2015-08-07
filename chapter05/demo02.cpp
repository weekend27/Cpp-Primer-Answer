/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 5.6 Rewrite your grading program to use the conditional operator
** (§ 4.7, p. 151) in place of the if–else statement.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	cout << "input your grade here : " << endl;
	int g = 0;
	while (cin >> g){
		string letter = (g < 60) ? scores[0] : scores[(g - 50) / 10];
		letter += ((g == 100) || (g < 60)) ? "" : g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
		cout << letter << endl;
	}
	return 0;
}


/*
**
** @Output
34
F
78
C+
90
A-
100
A++
23
F
60
D-
98
A+
9
F
97
A
78
C+
87
B
**
*/