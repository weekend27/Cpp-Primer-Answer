//vector initialize test

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<vector <int>> ivec;
	//vector <string> svec = ivec;
	vector<string> svec(10, "null");
	vector<string> svec2{10, "halo"};
	vector<string> svec3{10};

	return 0;
}