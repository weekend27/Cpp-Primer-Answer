
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	map<string, vector<string>> famls;
	string lastName, chldName;

	//! while(lambda)
    //! go to the discussions on stack overfow for more.
    while([&]() -> bool
    {
        cout << "Please enter last name:\n";

        return cin>>lastName && lastName != "@q";
    }())
//!  ^^
//! the () used here is to call the lambda ,otherwise it does not work
//! go to the post on stack overflow for more detail.

    {
        cout << "PLZ Enter children's name:\n";
        while(cin >> chldName && chldName != "@q")
        {
            //! add new items into the vector
            famls[lastName].push_back(chldName);
        }
    }

    //! iterate through the map.
    for(auto e : famls)
    {
        cout << e.first << ":\n";

        //! iterate through the vector.
        for(auto c : e.second)
            cout << c << " ";
        cout << "\n";
    }


}