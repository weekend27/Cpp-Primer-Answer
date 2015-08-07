/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.7: Write a function that returns 0 when it is first called and then
** generates numbers in sequence each time it is called again.
*/

#include <iostream>
#include "chapter06.h"

using namespace std;

int main(){
	for (size_t i = 0; i < 10; i++){
		cout << func() << endl;
	}

	return 0;
}

size_t func(){
	static size_t cnt = 0;
	return cnt++;
}


/*
**
** @Output
0
1
2
3
4
5
6
7
8
9
**
*/