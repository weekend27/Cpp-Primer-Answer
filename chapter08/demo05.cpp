/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 8.5: Rewrite the previous program to store each word in a
** separate element.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
	ifstream ifs(fileName);
	if (ifs)
	{
		string buf;
		while (ifs >> buf)
			vec.push_back(buf);
	}
}

int main()
{
	vector<string> vec;
	ReadFileToVec("../c++_note.md", vec);
	for (const auto &str : vec)
		cout << str << endl;
	return 0;
}

/*
**
** @Output

**
*/