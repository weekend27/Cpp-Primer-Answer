/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.32: Indicate whether the following function is legal. If so, explain
** what it does; if not, correct any errors and then explain it.
*/
#include <iostream>

using namespace std;

int &get(int *array, int index){
	return array[index];
}

int main(){
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;

	for (int i = 0; i != 10; ++i)
		cout << ia[i] << " ";
	cout << endl;
	
	return 0;
}

/*
**
** @Output
0 1 2 3 4 5 6 7 8 9
**
*/