//Finding the area of a triangle using its base and height
#include<iostream>
using namespace std;
int main()
{
	//defining variables for base and height
	cout << "Today we'll find the area of a triangle using its base and height";
	float b, h;

	//Asking for inputs
	cout << "What is base of the triangles?" << endl;
	cin >> b;
	cout << "What is height of the triangles?" << endl;
	cin >> h;

	//Calculating and printing the area of triangle
	float a = 0.5*b*h;
	cout << "The area of the triangle is " << a << endl;

return 0;
}
