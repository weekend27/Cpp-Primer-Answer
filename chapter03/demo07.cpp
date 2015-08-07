//string concatenation
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1 = "uber ", s2 = "airbnb ";
	string s3 = s1 + s2;

	cout << s3 + "google " + "apple" << endl;	// ok, each + has a string operand
	//cout << "google " + "apple" + s3 << endl;	// error: can't add string literals

	return 0;
}