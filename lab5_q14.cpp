// To check wether the triangle is valid or not
// including library
#include<iostream>
using namespace std;
int main()
{
	// defining variables
	int a, b, c;
	// Asking for input
	cout << "Please write the angles of triangle in degrees" << endl;
	cin >> a >> b >> c;
	// if its valid
	if ((a+b+c) == 180)
	cout << "The triangle is valid" << endl;
	// if not valid
	else cout << "The triangle is not valid" << endl;
return 0;
}
