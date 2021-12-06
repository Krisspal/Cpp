#include <iostream>

using namespace std;

int main()
{
	int n, tempt, tong = 0, chs;
	do
	{
		cout << "Nhap so nguyen: "; 
		cin >> n;
		if (n <= 0)
			cout << "Ban da nhap sai! Vui long nhap lai\n";
	} while (n <= 0);
	tempt = n;
	while (tempt > 0)
	{
		chs = tempt % 10;
		if (chs % 2 != 0)
			tong += chs;
		tempt = tempt / 10;
	}
	cout << "Tong cac chu so le cua " << n << " la " << tong << endl;
	system("pause");
	return 0;
	
}