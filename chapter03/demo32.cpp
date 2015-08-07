/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Revise the loop that printed the first paragraph in text 
** to instead change the elements in text that correspond 
** to the first paragraph to all uppercase. 
** After you’ve updated text, print its contents.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
	vector<string> text;
	for (string line; getline(cin, line); text.push_back(line))
		;
	for (auto& word : text)
		cout << word;
	cout << endl;
	for (auto& word : text){
		for(auto& ch : word){
			if (isalpha(ch))
				ch = toupper(ch);
		}
	}
	for (auto& word : text)
		cout << word << " ";
	cout << endl;
	return 0;
}

/*
**
** @Output
hello, world !!! hahaha 1223 WORLD 
HELLO, WORLD !!! HAHAHA 1223 WORLD
**
*/