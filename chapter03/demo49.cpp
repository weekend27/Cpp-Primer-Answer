/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** array test
*/

#include <iostream>
#include <cstring>
using namespace std;

const char cstr1[] = "Hello";
const char cstr2[] = "Weekend";

int main(){
	constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
	char cstr3[new_size];

	strcpy(cstr3, cstr1);
	strcat(cstr3, " ");
	strcat(cstr3, cstr2);

	cout << cstr3 << endl;

	return 0;
}

/*
**
** @Output
Hello Weekend
**
*/

