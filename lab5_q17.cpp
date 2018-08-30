// To find all the roots of a given quadratic equation
// including library
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	// defining variables
	float a, b, c;
	// Asking for input
	cout << "Let your quadratic be in the form of a(x)^2 + bx + c " << endl;
	cout << "Please write the values of a,b and c" << endl;
	cin >> a >> b >> c;
	// finding the roots of equation
	float r1, r2, D;
	D = (b*b) - (4*a*c);
	// 3 conditions of D
	// condition 1
	if (D > 0)
		{r1 = (-b + sqrt(D))/2*a;
		r2 = (-b - sqrt(D))/2*a;
		cout << "The roots are real and different which are " << r1 << " and " << r2 			<< endl;}
	else if (D == 0)
		{r1 = (-b)/2*a;
		cout << "The root is " << r1 << " only." << endl;}
	else
		{float r11, r21;
		r11 = (-b)/2*a;
		r21 = sqrt((-D))/2*a;
		cout << "The roots are imaginary, which are " << r11 << "+i[" << r21 << "] 			and " << r11 << "-i[" << r21 << "]" << endl;}
return 0;
}
