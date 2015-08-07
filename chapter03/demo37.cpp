/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** test array
*/

#include <iostream>
using namespace std;
int txt_size();

int main() {
	char a1[] = {'C', '+', '+'};	// list initialization, no null
	char a2[] = {'C', '+', '+','\0'};	// list initialization, explicit null
	char a3[] = "C++";		// null terminator added automatically
	//const char a4[7] = "weekend";	// error: no space for the null!

	//We cannot initialize an array as a copy of another array, 
	//nor is it legal to assign one array to another
	int a4[] = {1, 2, 3, 4};
	//int a5[] = a4;		// error: cannot initialize one array with another
	//a5 = a4;				// error: cannot assign one array to another

	int *ptrs[10];			//  ptrs is an array of ten pointers to int
	//int &refs[10];		//  error: no arrays of references
	int arr[] = {0,1,2,3,4,5,6,7,8,9};	
	int (*Parray)[10] = &arr;	//  Parray points to an array of ten ints
	int (&arrRef)[10] = arr;	//  arrRef refers to an array of ten ints
	int *(&arry)[10] = ptrs;	// 	arry is a reference to an array of ten pointers

	unsigned buf_size = 1024;
	int ia[buf_size];	//legal
	int ib[4 * 7 - 14];	//legal
	int ic[txt_size()];	//legal
	

	return 0;
}

int txt_size(){
	return 42;
}

/*
**
** @Output

**
*/