// To find the first and last digits of any number
#include<iostream>
using namespace std;
int main()
{
	//defining variables
	int n, first, last;
	//asking for input
	cout << "Please type a number." << endl;
	cin >> n;
	first = n;
	last = n % 10;
	
	for (first = n;first >= 10; first = first/10);
	{ cout << "The first digit is " << first << endl;
	 cout << "The last digit is " << last << endl;
	}
return 0;
}
