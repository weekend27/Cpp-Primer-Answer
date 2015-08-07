/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** exercise 6.3 Write and test your own version of fact.
*/
#include <iostream>
#include "chapter06.h"

using namespace std;

int main() {
	int i;
	cout << "input an integer here : ";
	cin >> i;
	cout << endl << "The factorial of your given number is : " << fact(i) << endl;

	return 0;
}

int fact (int i){
	return (i > 1) ? i * fact(i - 1) : 1;
}


/*
**
** @Output
input an integer here : 0

The factorial of your given number is : 1
input an integer here : 5

The factorial of your given number is : 120
**
*/