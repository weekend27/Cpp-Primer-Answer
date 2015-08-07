//read a sequence of strings from cin and store those values in a vector

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string> svec;
	for(string s; cin >> s; svec.push_back(s))
		;

	return 0;
}