/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Write a program to initialize a vector from an array of ints.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int array[] = {1, 3, 5, 7, 9};
	vector<int> vec(begin(array), end(array));

	for (auto i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}

/*
**
** @Output
1 3 5 7 9
**
*/

