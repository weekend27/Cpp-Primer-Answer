

//ex 11.23

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	multimap<string, string> families;
	for (string lastName, childName; cin >> childName >> lastName; families.emplace(lastName, childName));
	for (const auto &s : families)
		cout << s.second << " " << s.first << endl;

	return 0;
}

//ok