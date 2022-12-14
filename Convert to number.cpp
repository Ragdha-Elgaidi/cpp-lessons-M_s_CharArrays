/*
● Read a string of 6 letters maximum, convert it to int then print
○ the number, the number multiplied by 3
● Input ⇒ output
○ “100” ⇒ 100 300
○ “0200” ⇒ 200 600
*/
#include<iostream>
using namespace std;

int main()
{
	int number = 0;
	string str;

	cin >> str;
	// How to convert digits 1 2 3 4 5 to 12345?
	// Repeat: multiply with 10 then add digit
	// 1 => 10 + 2 = 12 => 12 * 10 + 3 = 123 => 123 * 10 + 4 = 1234 => 1234 * 10 + 5 = 12345
	for (int i = 0; i < (int)str.size(); i++)
	{
		number = number * 10 + (str[i] - '0');
	}
	cout << number << " " << number * 3 << endl;
	return 0;
}
