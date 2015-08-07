//use for loop to process all the elements in a vector

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v{1,2,3,4,5,6,7,8,9};
	//print the original vector element
	for (auto i : v)
		cout << i << "\t" ;
	cout << "\n";
	//square the element value
	for (auto &i : v)
		i *= i;
	//print the element after square process
	for (auto i : v)
		cout << i << "\t" ;
	cout << "\n";
	return 0;
}