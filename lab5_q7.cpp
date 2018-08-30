// To check wether a character is alphabet or not
// including library
#include<iostream>
using namespace std;

int main()
{
	// defining variables
	char var;
	// ask for input
	cout << "Please input a single character" << endl;
	cin >> var;
	// condition 1
	if ((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z'))
	cout << "It is an alphabet" << endl;
	else cout << "It is not an alphabet" << endl;
return 0;
}
