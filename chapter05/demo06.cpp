/*
** @Author  @weekend27 
** @Date    July.2015
** @Brief
** Exercise 5.12: Modify our vowel-counting program so that it counts the
** number of occurrences of the following two-character sequences: ff, fl, and fi.
*/

#include <iostream>

using std::cin; 
using std::cout; 
using std::endl;
using std::noskipws;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, 
             spaceCnt = 0, tabCnt = 0, newLineCnt = 0, 
             ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';
    while (cin >> noskipws >> ch)
    {
        switch (ch)
        {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
                if (prech == 'f') ++fiCnt;
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newLineCnt;
                break;
            case 'f':
                if (prech == 'f') ++ffCnt;
                break;
            case 'l':
                if (prech == 'f') ++flCnt;
                break;
        }
        prech = ch;
    }
    
    cout << "Number of vowel a(A): \t" << aCnt << '\n'
        << "Number of vowel e(E): \t" << eCnt << '\n'
        << "Number of vowel i(I): \t" << iCnt << '\n'
        << "Number of vowel o(O): \t" << oCnt << '\n'
        << "Number of vowel u(U): \t" << uCnt << '\n'
        << "Number of space: \t" << spaceCnt << '\n'
        << "Number of tab char: \t" << tabCnt << '\n'
        << "Number of new line: \t" << newLineCnt << '\n'
        << "Number of ff: \t\t" << ffCnt << '\n'
        << "Number of fl: \t\t" << flCnt << '\n'
        << "Number of fi: \t\t" << fiCnt << endl;
    
    return 0;
}

/*
**
** @Output
ff as df asdoijpqwe
         asd fuoauoisdzxweUUIIAAINOOOWNNJKK 
flflflfllllll 
fififi
Number of vowel a(A):   6
Number of vowel e(E):   2
Number of vowel i(I):   8
Number of vowel o(O):   6
Number of vowel u(U):   4
Number of space:    7
Number of tab char:     2
Number of new line:     4
Number of ff:       1
Number of fl:       4
Number of fi:       3
**
*/