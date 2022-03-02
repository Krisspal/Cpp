#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
const int M = 10, N = 10;
int main()
{
	int a[M][N], n, tong = 0;

	//Nhap so dong va cot
	do
	{
		cout << "Nhap cap cua ma tran vuong (0 < n <= 10)\n";
		cin >> n;
		if (n > 10 || n <= 0)
			cout << "Nhap sai! Vui long hhap lai\n";
	} while (n > 10 || n <= 0);
	//Tao mang
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	//Xuat mang
	cout << "Xuat mang:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << a[i][j];
			cout << " ";
		}
		cout << endl;
	}
	//Tinh tong
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{	
				tong += a[i][j];
			}
				
		}
	}
	cout << "Tong cac gia tri tren duong cheo chinh la " << tong << endl;

	return 0;
}