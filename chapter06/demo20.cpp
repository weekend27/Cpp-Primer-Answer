/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p.
** about its execution. For example, you might print the size of
** the vector on each call. Compile and run the program with debugging
** turned on and again with it turned off.
*/

#include <iostream>
#include <vector>

using namespace std;

#define NDEBUG

void printVec(vector<int> &vec){
	//#ifdef NDEBUG
	#ifndef NDEBUG
		cout << "vector size: " << vec.size() << endl;
	#endif
		if (!vec.empty()){
			auto tmp = vec.back();
			vec.pop_back();
			printVec(vec);
			cout << tmp << " ";
		}	
}

int main(){
	vector<int> vec{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	printVec(vec);
	cout << endl;

	return 0;
}

/*
**
** @Output
#ifndef NDEBUG
1 3 5 7 9 2 4 6 8 10 

#ifdef NDEBUG
vector size: 10
vector size: 9
vector size: 8
vector size: 7
vector size: 6
vector size: 5
vector size: 4
vector size: 3
vector size: 2
vector size: 1
vector size: 0
1 3 5 7 9 2 4 6 8 10
**
*/