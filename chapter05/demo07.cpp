/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.14: Write a program to read strings from standard input
** looking for duplicated words. The program should find places in the input
** where one word is followed immediately by itself. Keep track of the largest
** number of times a single repetition occurs and which word is repeated. Print
** the maximum number of duplicates, or else print a message saying that no
** word was repeated. 
*/

#include <iostream>

using namespace std;

int main()
{
    pair<string, int> max_duplicated;
    int count = 0;
    for (string str, prestr; cin >> str; prestr = str){
    	if (str == prestr) 
    		++count;
    	else 
    		count = 0;
    	if (count > max_duplicated.second)
    		max_duplicated = {prestr, count};
    }
    
    if (max_duplicated.first.empty())
    	cout << "There is no duplicated string." << endl;
    else
    	cout << "The word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times." << endl;

    return 0;
}

/*
**
** @Output
now now hello h h hh
no no no
The word no occurred 3 times.
**
*/