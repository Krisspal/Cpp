#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	int x;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	do
	{
		cout << "Nhap vi tri muon chen s2 vao s1 (x < " << s1.size() << "): ";
		cin >> x;
		if (x > s1.size() || x < 0)
		{
			cout << "Nhap sai! Vui long nhap lai\n";
		}
	} while (x > s1.size() || x < 0);
	s1 = s1.insert(x, s2);
	cout << s1 << endl;
	return 0;
}