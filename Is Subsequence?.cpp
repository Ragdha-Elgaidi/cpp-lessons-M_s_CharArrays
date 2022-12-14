/*
● Read 2 strings input and str. Print YES if the given str is a subsequence for
the string. Otherwise, print NO
● Input ⇒ Outputs
○ ABCDEFG ABCD ⇒ YES
○ ABCDEFG ABCDEF ⇒ YES
○ ABCDEFG EFG ⇒ YES
○ ABCDEFG DEFG ⇒ YES
○ ABCDEFG BCD ⇒ YES
○ ABCDEFG DEF ⇒ YES
○ ABCDEFG ACEG ⇒ YES
○ ABCDEFG DG ⇒ YES
○ ABCDEFG GD ⇒ NO
○ ABCDEFG ABCDEFG ⇒ YES
*/
#include<iostream>
using namespace std;

int main()
{
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size()) 
	{
		cout << "NO\n";
		return 0;
	}

	// Keep match letters in order from the big in the small
	int next_to_match = 0;
	for (int i = 0; i < (int)big_str.size(); ++i) 
	{
		if (big_str[i] == small_str[next_to_match])
		{
			++next_to_match;
			if (next_to_match == (int)small_str.size())
			{
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";

	return 0;
}
