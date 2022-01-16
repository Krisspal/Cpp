/*Consider the following operation on a string containing digits from 0 to 9:

if the leftmost digit of the string is divisible by 3, remove it from the string;
otherwise, if the rightmost digit of the string is divisible by 3, remove it from the string;
otherwise, if the sum of two digits on the sides of the string is divisible by 3, remove both digits from the string*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	bool check = true;
	cout << "Enter string\n";
	getline(cin, a);
	while (check && a.length() > 0)
	{
		check = false;
		if ((a[0] - '0') % 3 == 0)
		{
			a.erase(0, 1);
			check = true;
		}
		else
			if ((a[a.length() - 1] - '0') % 3 == 0)
			{
				a.erase(a.length() - 1, 1);
				check = true;
			}
			else
				if ((a[0] + a[a.length() - 1] - 96) % 3 == 0)
				{
					a.erase(0, 1);
					a.erase(a.length() - 1, 1);
					check = true;
				}
	}
	cout << a << endl;
	return 0;
}
