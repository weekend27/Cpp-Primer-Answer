/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.34: What would happen if the stopping condition in factorial
** were
** if (val != 0)
*/
#include <iostream>

using namespace std;

int factorial(int val){
	if(val > 1)
		return val * factorial(val-1);
	return 1;
}

int main(){
	cout << factorial(4) << endl;

	return 0;
}


/*
**
** @Output
24
**
*/