//Count common character of 2 strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b, ans = "";
	int count = 0;
	cout << "Enter 2 string:\n";
	getline(cin, a);
	getline(cin, b);
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			if (a[i] == b[j])
			{
				if (ans.find(a[i]) != -1)
				{
					continue;
				}
				else
					ans = ans + a[i];
			}
		}
	}
	cout << "Number of common character of 2 string is " << ans.size() << endl;
	return 0;
}
