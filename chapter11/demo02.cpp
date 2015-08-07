/*
using set
*/
#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
	map<string, size_t> word_count;		//string to size_t empty map
	set<string> exclude = {"The", "the", "But", "but", "An", "an"};
	
	string word;
	while (cin >> word)
		if (exclude.find(word) == exclude.end())
			++word_count[word];

	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

	return 0;
}