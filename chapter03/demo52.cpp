/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Write a program to copy a vector of ints into an array of ints.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec{91, 93, 95, 97, 99};
	int array[5];
	for (int i = 0; i != vec.size(); i++)
		array[i] = vec[i];

	for (auto i : array)
		cout << i << " ";
	cout << endl;

	return 0;
}

/*
**
** @Output
91 93 95 97 99
**
*/