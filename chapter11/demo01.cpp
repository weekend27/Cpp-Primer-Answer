/*
using map 
*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, size_t> word_count;		//string to size_t empty map
	string word;
	while (cin >> word)
		++word_count[word];
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

	return 0;
}