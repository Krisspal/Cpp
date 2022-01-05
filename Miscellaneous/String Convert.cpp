#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	cout << "Nhap chuoi:\n";
	getline(cin, a);
	for (int i = 0; i <= a.size(); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = char(a[i] - 32);
		}
	}
	cout << "Chuoi sau khi bien doi\n";
	cout << a << endl;
	return 0;
}
