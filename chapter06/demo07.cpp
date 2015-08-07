/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.11: Write and test your own version of reset that takes a
** eference.
*/
#include <iostream>
#include "chapter06.h"
using namespace std;

int main(){

	int i = 27;
	reset(i);
	cout << "i = " << i << endl;

	return 0;
}

void reset(int &j){
	j = 666;
}

/*
**
** @Output
i = 666
**
*/