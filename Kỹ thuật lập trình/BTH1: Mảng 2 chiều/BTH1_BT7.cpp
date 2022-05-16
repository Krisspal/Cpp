#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <utility>

using namespace std;
const int M = 50, N = 50;

void NHAP(int a[M][N], int r, int c)
{
	do
	{
		if (r <= 0 || r > M || c <= 0 || c > N)
			cout << "Nhap sai! Vui long nhap lai\n";
	} while (r <= 0 || r > M || c <= 0 || c > N);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
}

void XUAT(int a[M][N], int r, int c)
{
	cout << "Xuat mang\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}

double TRUNGBINH(int a[M][N], int r, int c)
{
	double tong = 0, dem = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			tong = tong + a[i][j];
			dem++;
		}
	}
	return tong / dem;
}

bool KIEMTRA(int a[M][N], int r, int c, int x)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == x)
			{
				return true;
				break;
			}
		}
	}
	return false;
}

//void HOANDOI(int a[M][N], int r, int c, int x, int y)
//{
//	if (KIEMTRA(a, r, c, x))
//	{
//		if (KIEMTRA(a, r, c, y))
//		{
//			swap(a[x][y], a[x][y]);
//		}
//	}
//
//}

int TICH(int a[M][N], int r, int c, int cot)
{
	int tich = 1;
	for (int x = 0; x < c; x++)
	{
		tich *= a[x][cot];
	}
	return tich;
}

int main()
{
	int a[M][N], r, c, x, y, cot;
	cout << "Nhap so hang:\n";
	cin >> r;
	cout << "Nhap so cot\n";
	cin >> c;

	NHAP(a, r, c);
	XUAT(a, r, c);

	cout << "Gia tri trung binh cua cac phan tu trong mang la " << TRUNGBINH(a, r, c) << endl;

	cout << "Nhap phan tu can kiem tra\n";
	cin >> x;
	if (KIEMTRA(a, r, c, x))
		cout << x << " co ton tai trong mang";
	else
		cout << x << " khong ton tai trong mang";
	cout << endl;

	cout << "Nhap so nguyen y\n";
	cin >> y;
	/*HOANDOI(a, r, c, x, y);*/

	cout << "Nhap vi tri cot can tinh tich\n";
	cin >> cot;
	cout << "Tich cac phan tu o cot " << cot << " la " << TICH(a, r, c, cot) << endl;
	return 0;
}