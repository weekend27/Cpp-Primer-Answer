//count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100

#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<unsigned> scores(11,0);	//11 buckets, all initially 0
	unsigned grade;
	while (cin >> grade){
		if (grade <= 100)
			++scores[grade/10];
	}
	//print all elements in scores vector
	cout << "0-9\t";
	cout << "10-19\t";
	cout << "20-29\t";
	cout << "30-39\t";
	cout << "40-49\t";
	cout << "50-59\t";
	cout << "60-69\t";
	cout << "70-79\t";
	cout << "80-89\t";
	cout << "90-99\t";
	cout << "100\n";

	for (auto i : scores)
		cout << i << "\t";

	return 0;
}