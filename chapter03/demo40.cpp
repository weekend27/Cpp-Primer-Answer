/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Copy the array you defined in the previous exercise into another array.
** Rewrite your program to use vectors.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a[10] = {9,8,7,6,5,4,3,2,1,0};
	int i;
	vector<int> ivec;
	for (i = 0; i != 10; i++)
		ivec.push_back(a[i]);
	//print ivec
	for (auto i = 0; i != ivec.size(); i++)
		cout << ivec[i] << " ";
	cout << endl;

	return 0;
}


/*
**
** @Output
9 8 7 6 5 4 3 2 1 0
**
*/