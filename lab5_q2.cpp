// to find maximum between 3 numbers
// including library
#include<iostream>
using namespace std;

int main(){
	//defining variables
	int a1, a2, a3;
	// asking for 3 numbers
	cout << "Please write 3 different numbers." << endl;
	cin >> a1 >> a2 >> a3;
	// condition 1
	if (a1 > a2 && a1 > a3)
	{cout << "The largest number is: " << a1 << endl;
	}
	// condition 2
	else if (a2 > a1 && a2 > a3)
	{cout << "The largest number is: " << a2 << endl;
	}
	else {
	cout << "The largest number is: " << a3 << endl;
	}
return 0;
}
