//Exercise 3.6: Use a range for to change all the characters in a string to X.

#include <iostream>
#include <string>

using namespace std;

int main(){
	//input string
	string buf, con;
	for (; cin >> buf; con += (con.empty()?"":" ") + buf)
		;
	cout << "The input string is : " << con << endl;
	//convert the whole string
	for (auto &c : con)
		c = 'X';
	cout << "The new string is : " << con << endl;

	return 0;
}