//string initialize
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1 = "hello, C++!";
	string s2 = s1;
	string s3(10,'t');
	string s4("valueable");

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;

	return 0;
}