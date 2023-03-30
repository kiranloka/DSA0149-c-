
#include <bits/stdc++.h>
using namespace std;

void check(char ch)
{
	if (isupper(ch))
		cout << ch << " is an upperCase character\n";

	else if (islower(ch))
		cout << ch << " is a lowerCase character\n";

	else
		cout << ch << " is not an alphabetic character\n";
}

int main()
{
	char ch;
	ch = 'A';

	check(ch);

	ch = 'a';


	check(ch);


	ch = '0';

	check(ch);

	return 0;

}
