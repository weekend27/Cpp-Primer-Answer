

//ex 11.32

#include <map>
#include <set>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	multimap<string, string> authors{
		{"yogurt", "Learning Javascript"},
		{"weekend", "C++ Primer"},
		{"weekend", "Hacker and Painter"},
		{"yogurt", "Coding life"},
		{"yellow", "The Rule of Software Project"},
		{"Flyaway", "Leetcode"}
	};

	map<string, multiset<string>> order_authors;
	for (const auto &author : authors)
		order_authors[author.first].insert(author.second);
	for (const auto &author : order_authors)
	{
		cout << author.first << " : ";
		for (const auto &work : author.second)
			cout << work << "; ";
		cout << endl;
	}

	return 0;
}