/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Redo the first exercise from § 3.3.3 (p. 105) using iterators.
*/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

void check_and_print(const vector<int>& vec){
	cout << "size: " << vec.size() << " content: [";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << (it != vec.end() - 1 ? "," : "");
	cout << "]" << endl;
}

void check_and_print(const vector<string>& vec){
	cout << "size: " << vec.size() << " content: [";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << (it != vec.end() - 1 ? "," : "");
	cout << "]" << endl;
}

int main() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	check_and_print(v1);
	check_and_print(v2);
	check_and_print(v3);
	check_and_print(v4);
	check_and_print(v5);
	check_and_print(v6);
	check_and_print(v7);

	return 0;
}

/*
**
** @Output
size: 0 content: []
size: 10 content: [0,0,0,0,0,0,0,0,0,0]
size: 10 content: [42,42,42,42,42,42,42,42,42,42]
size: 1 content: [10]
size: 2 content: [10,42]
size: 10 content: [,,,,,,,,,]
size: 10 content: [hi,hi,hi,hi,hi,hi,hi,hi,hi,hi]
**
*/