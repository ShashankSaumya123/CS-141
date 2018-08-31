// To print multilication table of any number
#include<iostream>
using namespace std;
int main()
{
	//defining variables
	int n, i, mul;
	//asking for input
	cout << "Please type the number whose multiplication table you need." << endl;
	cin >> n;
	cout << "The multiplication table of " << n << " is:" << endl;
	
	//looping starts
	for (i=1;i <= 10;++i)
	{mul = i*n;
	cout << i << " * " << n << " = " << mul << endl;}
return 0;
}
	 
