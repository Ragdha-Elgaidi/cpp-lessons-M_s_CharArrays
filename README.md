# cpp-lessons-M_s_CharArrays
## Char Arrays vs String
### Char Array 
- It's just array, a primitive data type
- It is more a C-Style
- You need to carefully handle the null
### String
- It's not a permitivie. It is a class.
- It is a C++ style.
- It is part of the STL Library.
- It supports a lot of convenient features (e.g. name1 + name2) and comparisons
- Please use it. You rarely need to use C-style char array
## Escape characters are :
- \n = new line
- \t = tab
- \0 = null
- \” = “
### We can use them like that :
'''

	// Escape characters
	cout<<"hello\tworld\n";
	cout<<"\0";
	cout<<"Let's print a double quote \"  ";

	return 0;
	
'''
## Some important definitions:
- Let say we have string aaabcdefgg
#### Prefix:
- Any string starts from the first character (n prefixes)
###### for example:
- a, aa, aaa, aaab, aaabc, ….. aaabcdefgg
#### Suffix:
- Any string sends at the last character (n suffixes)
###### for example:
- g, gg, fgg, efgg, …. Aaabcdefgg
#### Substring:
- Starts wherever and end wherever, but consecutive
###### for example:
- of length 3: aaa, aab, abc, cde, def, efg, fgg.
#### Sub-sequence:
- Not consecutive but must be in order ( Next letter must has bigger index)
###### for example:
- adef, bgg, aeg, cdgg
