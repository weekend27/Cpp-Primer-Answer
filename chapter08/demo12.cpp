/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 8.13: Rewrite the phone number program from this section to read
** from a named file rather than from cin.
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

bool valid(const string& str)
{
	return isdigit(str[0]);
}

string format(const string& str)
{
	return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main()
{
	ifstream ifs("PersonInfo.txt");
	if (!ifs)
	{
		cerr << "No data?!" << endl;
		return -1;
	}

	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	while (getline(ifs, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (const auto &entry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones){
			if (!valid(nums)){
				badNums << " " << nums;
			}else{
				formatted << " " << format(nums);
			}
		}
		if (badNums.str().empty())
			cout << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << entry.name
				 << " invalid number(s) " << badNums.str() << endl;
		
	}

	return 0;
}


/*
**
** @Output
PersonInfo.txt contents:
weekend 15600563827
yogurt 1234567 567498372 12310496 24325674
little_fish 34868098 68999584

Output:
weekend  156-005-63827
yogurt  123-456-7 567-498-372 123-104-96 243-256-74
little_fish  348-680-98 689-995-84
**
*/