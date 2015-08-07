/*
class example2 Sales_item
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
	Sales_item book1, book2;
	cin >> book1 >> book2;
	if(book1.isbn == book2.isbn){
		cout << book1 + book2 << endl;
		return 0;
	}else{
		cerr << "Data must refer to same ISBN" << endl;
		return -1;
	}
	
}