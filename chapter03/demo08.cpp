//Write a program to read a word at a time

#include <iostream>
#include <string>

using namespace std;

int main(){
	for(string word; cin >> word; cout << word << endl)
		;

	return 0;
}