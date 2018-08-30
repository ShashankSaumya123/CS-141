// Ask for month number and print number of days in that month
// including library
#include<iostream>
using namespace std;
int main()
{
	// defining variables
	int month;
	// Asking for input
	cout << "Please write the month number" << endl;
	cin >> month;
	// if else
	if ((month == 1)||(month == 3)||(month == 5)||(month == 7)||(month == 8)||(month == 10)||(month == 12))
	cout << "The number of days are 31" << endl;
	else if (month == 2)
	cout << "The number of days are 28" << endl; // considering year to be non leap year
	else cout << "The number of days are 30" << endl;
return 0;
}
