/*
● Read 2 strings, then output YES if the first smaller than or equal to second.
Otherwise, output NO
○ Don’t use < operator to compare strings. Use loops
● Input ⇒ Output
○ aaa aaa ⇒ YES
○ aaaaa aa ⇒ NO
○ abc d ⇒ YES
○ dddddddddddddd xyz ⇒ YES
○ azzzzzzzz za ⇒ YES
○ za azzzzzzzz ⇒ NO
*/
#include <iostream>
using namespace std;

int main()
{
	string a, b;

	cin >> a >> b;

	int sz = a.size();

	if (sz < b.size())
		sz = b.size();

	int smaller = -1;//not sure

	for (int i = 0; smaller == -1 && i < sz; ++i)
	{
		if (a[i] != b[i]) 
		{
			if (a[i] < b[i])
				smaller = 0;//bigger
			else
				smaller = 1;//smaller
		}
	}

	if (smaller == -1)
	{ 
		// then the first letters are common. Small in length is smaller
		if (a.size() <= b.size())
			smaller = 0;
		else
			smaller = 1;
	}

	if (smaller == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
