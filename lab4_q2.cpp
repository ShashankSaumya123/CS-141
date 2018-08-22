// Converting celsius to fahrenheit
#include<iostream>
using namespace std;
int main()
{
	// Defining variable c
	float c;

	// Asking an input in degree celsius
	cout << "What is the temperature in degree celsius?" << endl;
	cin >> c;

	// Converting and printing in degree fahrenheit
	float f = (c*1.8) + 32;
	cout << "Temperature in degree fahrenheit is " << f;

return 0;
}
