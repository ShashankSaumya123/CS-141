// To find the sum of all natural numbers from 1 to n
// include library
#include<iostream>
using namespace std;
int main()
{
	//defining varaiables
	int i,n;
	int sum = 0;
	//asking input
	cout << "Upto which number do you wish to add?" << endl;
	cin >> n;
	//starting loop
	for (i = 1;i<=n;++i)
	{sum += i;}
	cout << "The sum of all natural numbers upto here is " << sum <<endl;
return 0;
}
