/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** int 32bit : maximum: 4294967296 so [0, 12]
** exercise 6.4 Write a function that interacts with the user, asking for a
** number and generating the factorial of that number. Call this function from
** main.
*/
#include <iostream>
#include <string>
#include "chapter06.h"
using namespace std;

int main() {
	string const prompt = "Please input an integer within [0, 12] : ";
	string const out_of_range = "Out of range[0, 12], please try again!";
	//string const not_integer = "The input number is not an integer, please try again!";

	for (int i; cout << prompt, cin >> i; ){
		if (i < 0 || i > 12){
			cout << out_of_range << endl;
			continue;
		}else{
			cout << "The factorial of your given number is : " << fact(i) << endl;
		}
	}
	return 0;
}

int fact (int i){
	return (i > 1) ? i * fact(i - 1) : 1;
}


/*
**
** @Output
Please input an integer within [0, 12] : 12
The factorial of your given number is : 479001600
Please input an integer within [0, 12] : 11
The factorial of your given number is : 39916800
Please input an integer within [0, 12] : 10
The factorial of your given number is : 3628800
Please input an integer within [0, 12] : 9
The factorial of your given number is : 362880
Please input an integer within [0, 12] : 8
The factorial of your given number is : 40320
Please input an integer within [0, 12] : 7
The factorial of your given number is : 5040
Please input an integer within [0, 12] : 6
The factorial of your given number is : 720
Please input an integer within [0, 12] : 5
The factorial of your given number is : 120
Please input an integer within [0, 12] : 4
The factorial of your given number is : 24
Please input an integer within [0, 12] : 3
The factorial of your given number is : 6
Please input an integer within [0, 12] : 2
The factorial of your given number is : 2
Please input an integer within [0, 12] : 1
The factorial of your given number is : 1
Please input an integer within [0, 12] : 0
The factorial of your given number is : 1
Please input an integer within [0, 12] : -1
Out of range[0, 12], please try again!
Please input an integer within [0, 12] : 13
Out of range[0, 12], please try again!
Please input an integer within [0, 12] : 14
Out of range[0, 12], please try again!
**
*/