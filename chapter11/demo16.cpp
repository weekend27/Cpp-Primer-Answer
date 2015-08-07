
//ex 11.33

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
	map<string, string> trans_map;
	for (string key, value; map_file >> key && getline(map_file, value);)
		if (value.size() > 1)
			trans_map[key] = value.substr(1).substr(0, value.find_last_not_of(' '));
	return trans_map;
}

const string & transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	return map_it == m.cend() ? s : map_it -> second;
}

void word_transform(ifstream &map, ifstream &input)
{
	auto trans_map = buildMap(map);
	for (string text; getline(input, text); )
	{
		istringstream iss(text);
		for (string word; iss >> word; )
			cout << transform(word, trans_map) << " ";
		cout << endl;
	}
}

int main()
{
	ifstream ifs_map("./data/rules.txt"), ifs_content("./data/input.txt");
	if (ifs_map && ifs_content) 
		word_transform(ifs_map, ifs_content);
	else
		cerr << "can not find the documents." << endl;
}