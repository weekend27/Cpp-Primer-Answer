

//ex 11.21

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		auto ret = word_count.insert({word, 0});
		if (!ret.second)
			++ret.first->second;
	}

	//print the content of the map
	for (const auto &w : word_count)
		cout << w.first << " : " << w.second << endl;
}

// hello world world
// hello weekend 123 123 123 123 232
// rt
// 
// 123 : 3
// 232 : 0
// hello : 1
// rt : 0
// weekend : 0
// world : 1
