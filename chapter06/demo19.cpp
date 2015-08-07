/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.44: Rewrite the isShorter function from § 6.2.2 (p. 211) to be inline.
*/

#include <iostream>
#include <string>
#include "chapter06.h"
using namespace std;
/*
header file "chapter06.h" code

#include <string>
#include <iostream>
using namespace std;

inline bool is_Shorter(const string &lft, const string &rht){
	return lft.size() < rht.size();
}
*/

using namespace std;

int main(){
	cout << is_Shorter("weekend27", "yogurt1991") << endl;
	return 0;
}


/*
**
** @Output
1
**
*/