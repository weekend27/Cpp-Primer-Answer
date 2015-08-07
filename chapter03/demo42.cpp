
/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** array initialization
*/

#include <iostream>

using namespace std;

int main()
{
	//unsigned scores[11]; //error at run time
	unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
	unsigned grade;
	while (cin >> grade) {
    	if (grade <= 100)
        	++scores[grade/10]; // increment the counter for the current cluster
	}

	for (auto s : scores)
		cout << s << " ";
	cout << endl;

	return 0;
}

/*
**
** @Output
12 2 34 45 55 54 56 67 99 98 100 100 87 87 86 57 64 
1 1 0 1 1 4 2 0 3 2 2 
**
*/