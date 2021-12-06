#include <iostream>

using namespace std;

double tong(int a)
{
	int tong = 0;
	for (int i = 1; i <= a; i++)
		tong += i;
	return tong;
}

double tich(int a)
{
	double tich = 1;
	for (double i = 1; i <= a; i++)
		tich *= i;
	return tich;
}

int main()
{
	int n;
	cout << "Nhap so nguyen n:\n";
	cin >> n;
	cout << "Tong cac so tu 1 den " << n << " la " << tong(n) << endl;
	cout << n << "! = " << tich(n) << endl;

	system("pause");
	return 0;
}