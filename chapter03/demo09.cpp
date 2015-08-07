// read two strings and report whether the strings are equal
// If not, report which is larger

#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	while (cin >> s1 >> s2){
		if (s1 == s2)
			cout << "The two input strings are equal." << endl;
		else
			cout << "The larger string is : " << ((s1 > s2) ? s1 : s2) << endl;
	}
	
	return 0;
}