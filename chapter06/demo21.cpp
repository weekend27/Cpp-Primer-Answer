/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 6.51: Write all four versions of f. Each function should print a
** distinguishing message. Check your answers for the previous exercise. If your
** answers were incorrect, study this section until you understand why your
** answers were wrong.
*/

#include <iostream>
using std::cout; using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int)
{
    cout << "f(int)" << endl;
}

void f(int, int)
{
    cout << "f(int, int)" << endl;
}

void f(double, double)
{
    cout << "f(double, double)" << endl;
}

int main()
{
    //f(2.56, 42); // error: 'f' is ambiguous.
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    
    return 0;
}

/*
**
** @Output
error msg:

demo21.cpp: In function ‘int main()’:
demo21.cpp:36:15: error: call of overloaded ‘f(double, int)’ is ambiguous
     f(2.56, 42); // error: 'f' is ambiguous.
               ^
demo21.cpp:36:15: note: candidates are:
demo21.cpp:24:6: note: void f(int, int)
 void f(int, int)
      ^
demo21.cpp:29:6: note: void f(double, double)
 void f(double, double)
      ^
correct result:

f(int)
f(int, int)
f(double, double)

**
*/