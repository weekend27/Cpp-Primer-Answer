/*
nested scopes
*/

#include <iostream>

using namespace std;

int main(){

	int i = 100, sum = 0;
	for (i = 0; i != 10; i++)
		sum += i;
	
	cout << i << " " << sum << endl;	//10 45

	return 0;
}