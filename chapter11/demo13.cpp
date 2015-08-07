
//ex 11.28

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<int>> m;
	m = {{"weekend27",{1,3,5,7,9}},{"Reader",{2,4,6,8,0}}};

	map<string, vector<int>>::iterator it;

	it = m.find("weekend27");

	return 0;
}