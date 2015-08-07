/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** List three ways to define a vector and give it ten elements,
** each with the value 42.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ivec1(10, 42);
	vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector<int> ivec3;
	for (int i = 0; i < 10; i++)
		ivec3.push_back(42);	//notice: not ivec3[i] = 42; error!!!
								//ivec is an empty vector; there are no elements to subscript!
								//As we’ve seen, the right way to write this loop is to use push_back

	//print ivec1, ivec2, ivec3
	cout << "ivec1 = {";
	for (int i = 0; i < 10; i++)
		cout << ivec1[i] << ",";
	cout << "\b";
	cout << "}" << endl;

	cout << "ivec2 = {";
	for (int i = 0; i < 10; i++)
		cout << ivec2[i] << ",";
	cout << "\b";
	cout << "}" << endl;

	cout << "ivec3 = {";
	for (int i = 0; i < 10; i++)
		cout << ivec3[i] << ",";
	cout << "\b";
	cout << "}" << endl;

	return 0;
}

/*
**
**@Output
**ivec1 = {42,42,42,42,42,42,42,42,42,42}
**ivec2 = {42,42,42,42,42,42,42,42,42,42}
**ivec3 = {42,42,42,42,42,42,42,42,42,42}
**
*/