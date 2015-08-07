/*
for loop
*/
#include <iostream>
using namespace std;

int main(){
	int i, sum = 0;
	for(i = -100; i <= 100; i++){
		sum += i;
	}
	cout << "sum = " << sum << endl;
}
