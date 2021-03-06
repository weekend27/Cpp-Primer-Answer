/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Read a set of integers into a vector. Print the sum of each
** pair of adjacent elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

	//Read a set of integers into a vector.
	vector<int> ivec;
	for (int i; cin >> i; ivec.push_back(i))
		;
	if (ivec.empty()){
		cout << "The vector is empty!!!" << endl;
		return -1;
	}

	//use another vector to store the sum of each pair of adjacent elements
	vector<int> svec;
	if (ivec.size() == 1){
		cout << "The vector has only one element, so it has no adjacent elements!!!" << endl;
		return -1;
	}
	for (int i = 0, sum = 0; i < ivec.size() - 1; i++){
		sum = ivec[i] + ivec[i+1];
		svec.push_back(sum);
		sum = 0;
	}

	//print the sum
	for (int i = 0; i < svec.size(); i++)
		cout << svec[i] << " ";
	cout << endl;

	return 0;
}

/*
**
**@Output
**(input)
**12 34 45 43 1 2 3 5 99 56 43 76 21 
**^D(EOF)
**(output)
**46 79 88 44 3 5 8 104 155 99 119 97 
*/