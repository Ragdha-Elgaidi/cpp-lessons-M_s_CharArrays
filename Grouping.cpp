/*
● Read a string, then divide it to consecutive groups of same letter. Print each 
group
● Input ⇒ outputs.
○ “111222aabbb” ⇒ 111 222 aa bbb
○ HHHH ⇒ HHHH
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	string str;
	cin >> str;

	sort(str.begin(), str.end());

	for (int i = 0; i < (int)str.size(); i++) 
	{
		if (i != 0 && str[i - 1] != str[i]) // new group, split by space
			cout << " ";
		cout << str[i];
	}
	return 0;
}
