

//ex 11.31

#include <map>
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
		{"yellow", "The Rule of Software Project"}
	};

	//delete an element that author is "weekend", work is "Hacker and Painter"
	string author = "weekend";
	string work = "Hacker and Painter";

	auto found = authors.find(author);
	auto count = authors.count(author);

	while (count)
	{
		if(found->second == work)
		{
			authors.erase(found);
			break;
		}
		++found;
		--count;
	}

	for (const auto &author : authors)
		cout << author.first << " " << author.second << endl;

	return 0;
}