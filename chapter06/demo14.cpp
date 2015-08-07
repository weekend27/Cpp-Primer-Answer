/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.30: Compile the version of str_subrange as presented on
** page 223 to see what your compiler does with the indicated errors.
*/
#include <iostream>

using namespace std;

/*
//incorrect return values, this code will not compile
bool str_subrange(const string &str1, const string &str2){
	if (str1.size() == str2.size())
		return str1 == str2;

	auto size = (str1.size() < str2.size()) 
				? str1.size() : str2.size();

	for (decltype(size) i = 0; i != size; ++i){
		if (str1[i] != str2[i])
			return;
	}
}
*/

int main(){
	return 0;
}

/*
**
** @Output
demo14.cpp: In function ‘bool str_subrange(const string&, const string&)’:
demo14.cpp:22:4: error: return-statement with no value, in function returning ‘bool’ [-fpermissive]
    return;
    ^
**
*/