//read strings from the standard input, concatenating what is read into one large string. 
//print the concatenated string

#include <iostream>
#include <string>

using namespace std;

int main(){
	string buf, con;
	for (; cin >> buf; con += buf)
		;
	cout << "The concatenated string is : " << con << endl;
	return 0;
}