//Change the uppercase to lowercase and add white-space before that
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, ans;
	cout << "Enter sentence\n";
	getline(cin, a);
	//Convert first letter to lowercase so that its dont have blank at the begin
	if (a[0] >= 'A' && a[0] <= 'Z')
		a[0] += 32;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			ans = ans + " " + char(a[i] + 32);
		else
			ans = ans + a[i];
	}
	cout << ans;
	return 0;
}
