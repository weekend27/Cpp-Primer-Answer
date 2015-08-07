/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.25: Revise your program from the previous exercise to use a
** try block to catch the exception. The catch clause should print a message
** to the user and ask them to supply a new number and repeat the code inside
** the try.
*/

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	for (int a, b; cout << "Input two integers here : \n", cin >> a >> b; ){
		try{
			if (b == 0)
    			throw runtime_error("divisor is zero! try again.");
    		cout << a / b << endl;
		}
		catch (runtime_error err){
			cout << err.what() << endl;
		}
	}

    return 0;
}

/*
**
** @Output
Input two integers here : 
23 3 
7
Input two integers here : 
4 0
divisor is zero!!!
**
*/