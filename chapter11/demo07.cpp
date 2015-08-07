

#include <vector>
#include <utility>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<pair<string, int>> pvec;
	string str;
	int i;

	while (cin >> str >> i)
		pvec.push_back(pair<string, int>(str, i));
		// pvec.push_back(make_pair(str, i));
		// pvec.push_back({str, i});
		// pvec.emplace_back(str, i);

	for (const auto &p : pvec)
		cout << p.first << ":" << p.second << endl;
}