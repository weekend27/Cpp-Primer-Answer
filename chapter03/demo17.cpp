//read a sequence of ints from cin and store those values in a vector

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> ivec;
	for(int i; cin >> i; ivec.push_back(i))
		;

	return 0;
}