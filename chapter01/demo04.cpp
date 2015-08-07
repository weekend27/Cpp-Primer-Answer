/*
add two numbers
comments
*/
#include <iostream>

int main(){
	//input two numbers
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;		/*save our input data*/
	std::cin >> v1 >> v2;
	///*/**/what*/
	std::cout << "The sum of " << v1 << " and " << v2
			  << " is " << v1 + v2 << std::endl;
	return 0;
}
