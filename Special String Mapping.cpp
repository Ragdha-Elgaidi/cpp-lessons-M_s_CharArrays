/*
● Read a string and do the following conversions for its letters
○ If it is an upper letter, don’t change
○ If it is lower letter, use this map of 26 letters:
■ abcdefghijklmnopqrstuvwxyz
■ YZIMNESTODUAPWXHQFBRJKCGVL
■ E.g. a ⇒ Y and z ⇒ L
○ If it is digit, use this map of 10 letters:
■ 0123456789
■ !@#$%^&*()
● Input ⇒ Output
○ acMNmn39 ⇒ YIMNPW$)
○ vwXYZ0123 ⇒ KCXYZ!@#$
*/
#include <iostream>
using namespace std;

int main()
{
	string from = "abcdefghijklmnopqrstuvwxyz0123456789";
	string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

	char letter_map[150] = { 0 };

	for (int i = 0; i < from.size(); ++i)
		letter_map[from[i]] = to[i];

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); ++i) 
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			continue;

		str[i] = letter_map[str[i]];
	}
	cout << str;

	return 0;
}
