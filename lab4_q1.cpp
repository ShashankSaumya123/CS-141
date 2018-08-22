// writing a program for converting cm into m and km
#include<iostream>
using namespace std;
int main()
{
	// Defining variable length in cm
	float l;

	//asking for length in cm
	cout << "Today we will convert cm into m and km."<< endl;
	cout << "What is the length in cm?" << endl;
	cin >> l;

	// converting and printing in m and km
	float m = l/100;
	cout << "The length in m is " << m << endl;
	float km = m/1000;
	cout << "The length in km is " << km;

return 0;
}
