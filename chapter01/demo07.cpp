/*
reading an unknown number of inputs
*/
#include <iostream>
using namespace std;

int main(){
	int sum = 0, value = 0;
	//read until end-of-file,calculating a running total of all values read
	//we hit end-of-file or invalid input, then over
	while(cin >> value)
		sum += value;
	cout << "sum = " << sum << endl;
}
