// To check for vowels or consonants
// including library
#include<iostream>
using namespace std;

int main()
{
	// defining variables
	char a;
	// Asking for input
	cout << "Please write an alphabet" << endl;
	cin >> a;
	// if vowel
	if ((a == 'a')||(a== 'e')||(a=='i')||(a=='o')||(a=='u') || (a == 'A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
	cout << "Its a vowel" << endl;
	// if consonant
	else cout << "Its a consonant" << endl;
return 0;
}
