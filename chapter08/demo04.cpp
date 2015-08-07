/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 8.4: Write a function to open a file for input and read its contents
** into a vector of strings, storing each line as a separate element in the
** vector.
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
		while (getline(ifs, buf))
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