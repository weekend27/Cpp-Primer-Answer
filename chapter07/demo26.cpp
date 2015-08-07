/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 7.41: Rewrite your own version of the Sales_data class to use
** delegating constructors. Add a statement to the body of each of the
** constructors that prints a message whenever it is executed. Write
** declarations to construct a Sales_data object in every way possible. Study
** the output until you are certain you understand the order of execution among
** delegating constructors.
*/

#include "demo25.cpp"

using std::cout; 
using std::endl;

int main()
{
    cout << "1. default way: " << endl;
    cout << "----------------" << endl;
    Sales_data s1;   
    
    cout << "\n2. use std::string as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s2("CPP-Primer-5th");
    
    cout << "\n3. complete parameters: " << endl;
    cout << "----------------" << endl;
    Sales_data s3("CPP-Primer-5th", 3, 25.8);
    
    cout << "\n4. use istream as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s4(std::cin);
    
    return 0;
}

/*
**
** @Output
1. default way: 
----------------
Sales_data(const std::string&, unsigned, double)
Sales_data()

2. use std::string as parameter: 
----------------
Sales_data(const std::string&, unsigned, double)
Sales_data(const std::string&)

3. complete parameters: 
----------------
Sales_data(const std::string&, unsigned, double)

4. use istream as parameter: 
----------------
Sales_data(const std::string&, unsigned, double)
Sales_data()
Sales_data(istream &is)
CPP 3 65
**
*/