#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (auto &p : people)
	{
		cout << p.name << " ";
		for (auto &s : p.phones)
			cout << s << " ";
		cout << endl;
	}

	return 0;
}

/*
** @Output
weekend 15600563827 1234567
yoga 234444 089-1230-456 222567
weekend 15600563827 1234567 
yoga 234444 089-1230-456 222567 
**
*/