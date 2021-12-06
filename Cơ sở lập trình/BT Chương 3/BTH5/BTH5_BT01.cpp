#include <iostream>

using namespace std;

int main()
{
	int i, n, tong = 0;
	do
	{
		cout << "Nhap so 1 so nguyen duong (n > 0):" ; 
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Vui long nhap lai!\n";

	} while (n <= 0);
	for (i = 1; i <= n; i++)
		tong += i;
	cout << "Tong cua so tu 1 den " << n << " la " << tong << endl;
	system("pause");
	return 0;
}