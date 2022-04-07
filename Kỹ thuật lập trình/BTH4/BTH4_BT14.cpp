#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s, c;
	int dem = 0;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Nhap ky tu can kiem tra: ";
	cin >> c;
	size_t pos = s.find(c, 0);
	while (pos != string::npos)
	{
		dem++;
		pos = s.find(c, pos + 1);
	}
	cout << dem << endl;

	return 0;
}