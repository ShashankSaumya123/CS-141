//Check wether a number is divisible by 5 & 11
// including library
#include<iostream>
using namespace std;

int main()
{
	// defining variables
	int a;
	// asking for a number
	cout << "Please write a number" <<endl;
	cin >> a;
	//condition 1
	if ((a % 5) == 0 && (a % 11) == 0)
	{ cout << "The number is divisible by 5 and 11" << endl;}
	else {cout << "The number is not divisible by 5 & 11" <<endl;}
return 0;
}
