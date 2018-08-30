// To check for leap year
// including library
#include<iostream>
using namespace std;

int main()
{
	// defining variables
	int year;
	//Asking for year
	cout << "Please write the year" << endl;
	cin >> year;
	// condition 1
	if ((year % 4) == 0)
	cout << "It's a leap year." << endl;
	else cout << "It's not a leap year" << endl;
return 0;
}
