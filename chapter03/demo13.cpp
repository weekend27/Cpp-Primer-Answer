//count the number of punctuation characters in a string

#include <iostream>
#include <string>

using namespace std;

int main(){
	//input string
	string buf, con;
	for (; cin >> buf; con += (con.empty()?"":" ") + buf)
		;
	//string con = "hello, world!!!";
	decltype(con.size()) punct_cnt = 0;
	//count the number of punctuation characters in con
	for (auto c : con){
		if (ispunct(c))
			++punct_cnt;
	}
		
	cout << punct_cnt 
		 << " punctuation characters in the input string : " << con << endl;

	return 0;
}