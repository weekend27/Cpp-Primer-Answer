/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.27: Write a function that takes an initializer_list<int>
** and produces the sum of the elements in the list.
*/
#include <iostream>
#include <initializer_list>
using namespace std;

int count(initializer_list<int> const& il){
	int cnt = 0;
	for (auto i : il)
		cnt += i;
	return cnt;
}

int main(){
	auto il = {1, 3, 5, 7, 9};
	cout << count(il) << endl;

	return 0;
}

/*
**
** @Output

**
*/