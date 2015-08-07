/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.19 Write a program that uses a do while loop to repetitively
** request two strings from the user and report which string is less than
** the other.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rsp;
    do{
    	cout << "please enter two strings here : " << endl;
    	string str1, str2;
    	cin >> str1 >> str2;
    	cout << ((str1 < str2) ? str1 : str2)
    		 << " is less than the other." << endl
    		 << "More ? Enter yes or no : ";
    	cin >> rsp;
    }while (!rsp.empty() && rsp[0] != 'n');

    return 0;
}

/*
**
** @Output
please enter two strings here : 
no yes
no is less than the other.
More ? Enter yes or no : y
please enter two strings here : 
hello wo
hello is less than the other.
More ? Enter yes or no : y   
please enter two strings here : 
hello hell
hell is less than the other.
More ? Enter yes or no : y
please enter two strings here : 
weekend yoga
weekend is less than the other.
More ? Enter yes or no : no
**
*/