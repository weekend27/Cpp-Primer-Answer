/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.33: Write a recursive function to print the contents of a vector.
*/
#include <iostream>
#include <vector>
using namespace std;
using Iter = vector<int>::const_iterator;

void print(Iter first, Iter last){
	if (first != last){
		cout << *first << " ";
		print(++first, last);
	}
}

int main(){
	vector<int> vec{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	print(vec.cbegin(), vec.cend());
	cout << endl;

	return 0;
}



/*
**
** @Output
1 3 5 7 9 2 4 6 8 10
**
*/