/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.25: Write a main function that takes two arguments.
** Concatenate the supplied arguments and print the resulting string.
** Exercise 6.26: Write a program that accepts the options presented in this
** section. Print the values of the arguments passed to main.
*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
	
	string str;
	for (int i = 1; i != argc; ++i){
		str += string(argv[i]) + " ";
	}
	cout << str << endl;

	return 0;
}

/*
**
** @Output
./demo12 hello weekend welcome to Guangdong
hello weekend welcome to Guangdong
**
*/