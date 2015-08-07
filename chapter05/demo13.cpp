/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.24: Revise your program to throw an exception if the second
** number is zero. Test your program with a zero input to see what happens on
** your system if you don’t catch an exception.
*/

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b == 0)
    	throw runtime_error("divisor is zero!!!");
    cout << a / b << endl;

    return 0;
}

/*
**
** @Output
4 0
terminate called after throwing an instance of 'std::runtime_error'
  what():  divisor is zero!!!
Aborted (core dumped)
**
*/