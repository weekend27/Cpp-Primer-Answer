/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.5: Write a function to return the absolute value of its argument.
*/
#include <iostream>
#include <string>
#include "chapter06.h"
using namespace std;

int main(){
	string const prompt = "Please input a number here : ";
	string const result = "The absolute value of this number is : ";

	for (double num = 0; cout << prompt, cin >> num; ){
		cout << result << abs_num(num) << endl;
	}
}

double abs_num(double num){
	return (num >= 0) ? num : -num;
}

/*
**
** @Output
Please input a number here : 4
The absolute value of this number is : 4
Please input a number here : 3
The absolute value of this number is : 3
Please input a number here : 1
The absolute value of this number is : 1
Please input a number here : 0
The absolute value of this number is : 0
Please input a number here : -12
The absolute value of this number is : 12
Please input a number here : -0.23
The absolute value of this number is : 0.23
**
*/