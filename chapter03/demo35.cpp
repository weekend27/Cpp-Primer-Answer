/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Redo the last exercise from § 3.3.3 (p. 105) using iterators.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ivec;
	for (int buffer; cin >> buffer; ivec.push_back(buffer))
		;

	if (ivec.size() < 2){
		cout << "please input at least two integers!" << endl;
		return -1;
	}

	for (auto it = ivec.cbegin(); it != ivec.cend() - 1; it++)
		cout << *it + *(it + 1) << " ";
	cout << endl;

	for (auto lft = ivec.cbegin(), rht = ivec.cend() - 1; lft <= rht; lft++, rht--)
		cout << *lft + *rht << " ";
	cout << endl;

	return 0;
}

/*
**
** @Output
case 1
** 1 2 3 4 5 6
** 3 5 7 9 11 
** 7 7 7 

case 2
** 1 2 3 4 5
** 3 5 7 9 
** 6 6 6
**
*/