//To convert the whole string 
//we need to call toupper on each character 
//and put the result back in that character

#include <iostream>
#include <string>

using namespace std;

int main(){
	//input string
	string buf, con;
	for (; cin >> buf; con += (con.empty()?"":" ") + buf)
		;
	//convert the whole string
	for (auto &c : con)
		c = toupper(c);
	cout << "The upper string is : " << con << endl;

	return 0;
}