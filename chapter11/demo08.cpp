

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Families
{
public:
	using Child		= pair<string, string>;
	using Children	= vector<Child>;
	using Data 		= map<string, Children>;

	auto add(string const& last_name, string const& first_name, string birthday) -> void
	{
		_data[last_name].push_back(make_pair(first_name, birthday));
	}

	auto print(ostream& os) const -> ostream&
	{
		if (_data.empty())
			return os << "No data right now." << endl;

		for (auto const& pair : _data)
		{
			os << pair.first << ":\n";
			for (auto const& child : pair.second)
				os << child.first << " " << child.second << endl;
			os << endl;
		}

		return os;
	}

private:
	Data _data;
};

int main()
{
	Families families;
	string message = "Please enter last name, first name and birthday";
	for (string l, f, b; cout << message << endl, cin >> l >> f >> b; families.add(l, f, b));
	families.print(cout << "Current data:" << endl);

	return 0;
}

