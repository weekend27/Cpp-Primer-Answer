/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so
** that it looks only for duplicated words that start with an uppercase letter.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string curr, prev;
    bool no_twice = true;
    while (cin >> curr){
    	if (isupper(curr[0]) && prev == curr){
    		cout << curr << " occurs twice in succession." << endl;
    		no_twice = false;
    		break;
    	}
    	prev = curr;
    }

    if (no_twice)
    	cout << "no word was repeated." << endl;

    return 0;
}

/*
**
** @Output
hello Hello asdf asdf cc  v
no word was repeated.
Hello Hello asdf asd fdf dd
Hello occurs twice in succession.
**
*/