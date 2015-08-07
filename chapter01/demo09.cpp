/*
class example1 Sales_item
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item book;
	//read ISBN, number of copies sold, and sales price
	cin >> book;
	//write ISBN, number of copies sold,total revenue, and average price
	cout << book << endl;
	return 0;
}