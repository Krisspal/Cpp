#include <iostream>

using namespace std;

int main()
{
	int n, i, tong = 0;
	do
	{
		cout << "Nhap so nguyen duong (n > 0): "; 
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai!Vui long nhap lai!\n";
	} while (n <= 0);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 !=0)
		tong += i;
	}
	cout << "Tong cac so le tu 1 den " << n << " la " << tong << endl;
	system("pause");
	return 0;
}
