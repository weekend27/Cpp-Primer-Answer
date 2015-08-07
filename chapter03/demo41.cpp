/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Copy the array you defined in the previous exercise into another array.
** Rewrite your program to use vectors.
*/

#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

int main()
{
    // array
    int arr[10];
    for (int i = 0; i < 10; ++i) arr[i] = i;
    int arr2[10];
    for (int i = 0; i < 10; ++i) arr2[i] = arr[i];
    for (auto i : arr2) cout << i << " ";
    cout << endl;

    // vector
    vector<int> v(10);
    for (int i = 0; i != 10; ++i) v[i] = arr[i];
    vector<int> v2(v);
    for (auto i : v2) cout << i << " ";
    cout << endl;

    return 0;
}

/*
**
** @Output
0 1 2 3 4 5 6 7 8 9 
0 1 2 3 4 5 6 7 8 9 
**
*/