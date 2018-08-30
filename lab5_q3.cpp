// To determine wether a number is -ve, zero or +ve
// including library
#include<iostream>
using namespace std;

int main(){
	//defining variables
	int a;
	// asking for a number
	cout << "Please write a number." << endl;
	cin >> a;
	//condition 1
	if (a < 0)
	{cout << "The number is negative" << endl;}
	else if (a > 0)
	{cout << "The number is positive" <<endl;}
	else {cout << "The number is zero" <<endl;}
return 0;
}
