/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Read a sequence of words from cin and store the values a vector.
** After you've read all the words, process the vector and change each word to uppercase.
** Print the transformed elements, eight words to a line.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> svec;
	for (string str; cin >> str; svec.push_back(str))
		;

	for (auto &str : svec)
		for (auto &c : str)
			c = toupper(c);

	for (int i = 0; i < svec.size(); i++){
		if (i % 8 == 0)
			cout << endl;
		cout << svec[i] << " ";
	}
	cout << endl;
	return 0;
}

/*
**
**@Output
**pezy is a good programmer you can ask any question to him all the time he is playing the codes
**^D(EOF)
**PEZY IS A GOOD PROGRAMMER YOU CAN ASK
**ANY QUESTION TO HIM ALL THE TIME HE
**IS PLAYING THE CODES
**
*/