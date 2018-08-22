// Writing a program to convert days into years, weeks and days
#include<iostream>
using namespace std;
int main()
{

	// Defining variable day
	int dayin;

	// Asking for number of days
	cout << "How many days has it been?" << endl;
	cin >> dayin;

	// Convrting into weeks and years
	int years = dayin/365;
	int weeks = (dayin%365)/7;
	int dayout = (dayin%365)%7;

	// Printing the output
	cout << "The proper way of saying it is " << years << " years " << weeks << " weeks and " << dayout 		<< " days" << endl;

return 0;
}
