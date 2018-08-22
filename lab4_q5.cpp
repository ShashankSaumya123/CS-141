// Finding out the third angle of a triangle
#include<iostream>
using namespace std;
int main()
{

	//Defining variables for input angles
	int a, b;

	//Asking for input of angles
	cout << "Today we will be calculating the value of the third angle of a triangle with the help of its other 2 angles" << endl;
	cout << "What is the value of first angle in degrees?" << endl;
	cin >> a;
	cout << "What is the value of second angle in degrees?" << endl;
	cin >> b;

	// Calculating and printing the third angle
	int c = 180-a-b;
	cout << "The third angle of the triangle in degrees is " << c << endl;

return 0;
}
