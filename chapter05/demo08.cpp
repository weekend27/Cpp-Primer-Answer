/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.17: Given two vectors of ints, write a program to determine
** whether one vector is a prefix of the other. For vectors of unequal
** length, compare the number of elements of the smaller vector. For
** example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5,
** 8, respectively your program should return true.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1{0, 1, 1, 2};
    vector<int> ivec2{0, 1, 1, 2, 4, 5, 8};

    auto size = (ivec1.size() < ivec2.size()) ? ivec1.size() : ivec2.size();
    int i = 0;
    for (; i != size && (ivec1[i] == ivec2[i]); ++i) ;
    if (i == size)
    	cout << "true" << endl;
    else
    	cout << "false" << endl;

    return 0;
}

/*
**
** @Output
true
**
*/