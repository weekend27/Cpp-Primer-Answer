/*
count how many consecutive times each distinct value appears in the input
*/
#include <iostream>
using namespace std;

int main(){
	//currVal is the number we are counting; we will read new values into val
	int currVal = 0, val = 0;

	//read first number and ensure that we have data to process
	if(cin >> currVal){
		int cnt = 1;	//store the count for the current value we're processing
		while(cin >> val){//read the remaining numbers
			if(val == currVal)
				++cnt;
			else{
				cout << currVal << " occurs " << cnt << " times " << endl;
				currVal = val;
				cnt = 1;
			}
		}
		//remember to print for the last value in the file
		cout << currVal << " occurs " << cnt << " times " << endl;
	}
	return 0;
}
