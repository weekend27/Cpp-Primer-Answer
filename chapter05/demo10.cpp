/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.20: Write a program to read a sequence of strings from the
** standard input until either the same word occurs twice in succession or all
** the words have been read. Use a while loop to read the text one word at a
** time. Use the break statement to terminate the loop if a word occurs twice
** in succession. Print the word if it occurs twice in succession, or else print a
** message saying that no word was repeated.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, tmp;
    while (cin >> str){
    	if (str == tmp)
    		break;
    	else
    		tmp = str;
    }
    if (cin.eof())
    	cout << "no word was repeated." << endl;
    else
    	cout << str << " occurs twice in succession." << endl;

    return 0;
}

/*
**
** @Output
hello hello hello asdfa dfdfd erer
hello occurs twice in succession.
hell hello hhh ba uba
no word was repeated.
**
*/