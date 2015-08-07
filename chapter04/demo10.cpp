/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** we can use postfix increment to write a loop to print the values in
** a vector up to but not including the first negative value
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ivec{1, 5, 8, 3, 2, -1, 9};
	auto pbeg = ivec.begin();
	while (pbeg != ivec.end() && *pbeg >= 0){
		cout << *pbeg++ << " ";
	}
	cout << endl;

	return 0;
}

/*
**
** @Output
1 5 8 3 2
**
*/