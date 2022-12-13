/*
● Read a string of lower/upper letters. Ignore upper letters and compute the
frequency of lower letters. Print ones that exists as below.
● Input: bAAAaaazz
● Output
○ a 3
○ b 1
○ z 2
*/
#include <iostream>
using namespace std;

int main()
{
	string str;

	cin >> str;

	int frequency[150] = { 0 };	// initalize to zeros

	for (int i = 0; i < str.size(); ++i)
		frequency[str[i]]++;	// Use char as frequency

	for (int i = 'a'; i <= 'z'; ++i) {
		if (frequency[i])
			cout << (char)i << " " << frequency[i] << "\n";
	}

	return 0;
}
