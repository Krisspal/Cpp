//Update using pointer
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int** p, n, tong1 = 0, tong2 = 0;
	cout << "Nhap cap cua ma tran vuong\n";
	cin >> n;
	//Cap phat mang
	p = new int*[n];
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	//Tao mang
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			p[i][j] = rand() % 100;
		}
	}
	//Xuat mang
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(9) << p[i][j];
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
				tong1 += p[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			{
				if (i + j == n - 1)
				tong2 += p[i][j];
			}
		}
	}
	cout << "Tong cac phan tu tren duong cheo chinh la " << tong1 << endl;
	cout << "Tong cac phan tu tren duong cheo phu la " << tong2 << endl;
	//Huy cap phat
	for (int i = 0; i < n; i++)
	{
		delete[]p[i];
	}
	delete[]p;
	p = 0;
	return 0;
}
