//header file for function declaration
#include <string>
#include <iostream>

using namespace std;

int fact (int i);					//demo01.cpp demo02.cpp

double abs_num(double num);			//demo03.cpp

size_t count (int n);				//demo04.cpp

size_t func();						//demo05.cpp

void swap(size_t* i, size_t* j);	//demo06.cpp

void reset(int &j);					//demo07.cpp

void swap(size_t& i, size_t& j);	//demo08.cpp

int compare(const int i, const int* j);	//demo09.cpp

//demo19.cpp
inline bool is_Shorter(const string &lft, const string &rht){
	return lft.size() < rht.size();
}