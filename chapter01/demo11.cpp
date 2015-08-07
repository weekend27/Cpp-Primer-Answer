/*
class example3 Sales_item
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item total;	//hold data for the next transaction
	//read the first transaction and ensure that there are data to process
	if(cin >> total){
		Sales_item trans;
		while(cin >> trans){
			if(total.isbn == trans.isbn)
				total += trans;
			else{
				//print results for the previous book
				cout << total << endl;
				total = trans;	//total now refers to next book
			}
		}
		cout << total << endl;	//print the last transaction
	}else{
		//no input!
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}