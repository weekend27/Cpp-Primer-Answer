/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Write a program to use a conditional operator to find the
** elements in a vector<int> that have odd value and double the value of
** each such element.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ivec{11, 12, 14, 56, 33, -7, 9};
	for (auto &i : ivec){
		((i % 2) != 0) ? i *= 2 : i *= 1;
	}

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	return 0;
}

/*
**
** @Output
22 12 14 56 66 -14 18
**
*/