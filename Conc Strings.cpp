/*
Read two strings S and T. Print a new string that contains the following:
○ First letter of the string S followed by the First letter of the string T.
○ Second letter of the string S followed by the Second letter of the string T.
○ and so on...
● Don’t create new strings. Don’t change input content
● Input ⇒ Output
○ abc defghi ⇒ adbecfghi
○ AM CICPC ⇒ ACMICPC
*/
#include <iostream>
using namespace std;

int main() 
{
	string first, second;

	cin >> first >> second;

	int mx_sz = first.size();

	if (mx_sz < second.size())
		mx_sz = second.size();

	for (int i = 0; i < mx_sz; ++i)
  {
		if (i < first.size())
			cout << first[i];

		if (i < second.size())
			cout << second[i];
	}

	cout << "\n";
	return 0;
}
