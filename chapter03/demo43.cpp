/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** array test
*/

#include <iostream>

using namespace std;

int main()
{
	int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints
	auto ia2(ia);	// ia2 is an int* that points to the first element in ia
	//ia2 = 42;     // error: ia2 is a pointer, and we can't assign an int to a pointer

	int *e = &ia[10]; // pointer just past the last element in ia
	for (int *b = ia; b != e; b++)
		cout << *b << " ";
	cout << endl;

	int *first = begin(ia);
	int *last = end(ia);
	auto num1 = *(last-1) - *first + 1;
	cout << "num1 = " << num1 << endl;

	int num2 = 0;
	while (first != last && *first >= 0){
		++num2;
		++first;
	}
	
	cout << "num2 = " << num2 << endl;
	
	return 0;
}

/*
**
** @Output
0 1 2 3 4 5 6 7 8 9 
num1 = 10
num2 = 10
**
*/