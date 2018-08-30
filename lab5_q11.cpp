// Input week day number and print week day
// including library
#include<iostream>
using namespace std;

int main()
{
	// defining variables
	int day;
	// Asking for input
	cout << "Please write the week day" << endl;
	cin >> day;
	// if else
	if (day == 1)
	cout << "Its Monday" << endl;
	else if (day == 2)
	cout << "Its Tuesday" << endl;
	else if (day == 3)
	cout << "Its Wednesday" << endl;
	else if (day == 4)
	cout << "Its Thursday" << endl;
	else if (day == 5)
	cout << "Its Friday" << endl;
	else if (day == 6)
	cout << "Its Saturday" << endl;
	else if (day == 7)
	cout << "Its Sunday" << endl;
	else cout << "Seriously??? :-/" << endl;
return 0;
}
