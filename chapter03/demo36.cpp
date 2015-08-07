/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Rewrite the grade clustering program from § 3.3.3 (p. 104)
** using iterators instead of subscripts.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<unsigned> scores(11, 0);
	for (unsigned grade; cin >> grade; )
		if (grade <= 100)
			++*(scores.begin() + grade / 10);

	for (auto s : scores)
		cout << s << " ";
	cout << endl;

	return 0;
}

/*
**
** @Output
12 23 44 66 55 78 99 100 56 64 32 25 87 99 98 76 65 66 78 
0 1 2 1 1 2 4 3 1 3 1 
**
*/