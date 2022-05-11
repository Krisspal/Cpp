#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
const int M = 5, N = 6;
int main()
{
	int a[M][N];
	int r, c, x, chon1, chon2, tong = 0, dem = 0;
	bool kt = false;
	//Nhap so dong va cot
	do
	{
		cout << "Nhap so dong va so cot\n";
		cout << "So dong:\n";
		cin >> r;
		cout << "So cot:\n";
		cin >> c;
		if (r <= 0 || r > M || c <= 0 || c > N)
		{
			cout << "Nhap sai! Vui long nhap lai\n";
		}
	} while (r <= 0 || r > M || c <= 0 || c > N);
	//Tao mang
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	//Xuat mang
	cout << "Xuat mang:\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(3) << a[i][j];
			cout << " ";
		}
		cout << endl;
	}
	//Nhap dong hoac cot can tinh tong
	do
	{
		cout << "Chon dong hoac cot\n";
		cout << "Chon 1 cho dong\nChon 2 cho cot\n";
		cin >> chon1;
		switch (chon1)
		{
		case 1:
		{
			cout << "Nhap chi so dong can tinh:\n";
			cin >> chon2;
			break;
		}
		case 2:
		{
			cout << "Nhap chi so cot can tinh:\n";
			cin >> chon2;
			break;
		}
		}
		if (chon2 <= 0 || chon2 > r || chon2 <= 0 || chon2 > c)
		{
			cout << "Nhap sai dong/cot! Vui long nhap lai\n";
		}
} while (chon2 <= 0 || chon2 > r || chon2 <= 0 || chon2 > c);
//Tinh tong
if (chon1 == 1)
{
	for (int j = 0; j < c; j++)
	{
		tong += a[chon2][j];
	}
}
if (chon1 == 2)
{
	for (int i = 0; i < r; i++)
	{
		tong += a[i][chon2];
	}
}

cout << "Tong cac gia tri la " << tong << endl;
cout << "Nhap so can tim trong mang\n";
cin >> x;
for (int i = 0; i < r; i++)
{
	for (int j = 0; j < c; j++)
	{
		if (a[i][j] == x)
		{
			kt = true;
			dem++;
		}
	}
}

if (kt)
{
	cout << x << " co xuat hien trong mang va xuat hien " << dem << " lan" << endl;
}
else
cout << x << " khong xuat hien trong mang\n";
return 0;
}
