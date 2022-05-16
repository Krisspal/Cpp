#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <utility>

using namespace std;
const int M = 50, N = 50;

void TAO(int a[M][N], int n)
{
	do
	{
		if (n > M || n > N || n <= 0)
			cout << "Nhap sai! Vui long nhap lai\n";
	} while (n > M || n > N || n <= 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
}

void XUAT(int a[M][N], int n)
{
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}

void TONG(int a[M][N], int n)
{
	int tong[M][N];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tong[i][j] = a[i][j] + a[i][j];
		}
	}
	cout << "Tong cua hai ma tran la\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << tong[i][j];
		}
		cout << endl;
	}
}

void TICH(int a[M][N], int n)
{
	int tich[M][N], tong;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tong = 0;
			for (int r = 0; r < n; r++)
				tong = tong + a[i][r] * a[r][j];
			tich[i][j] = tong;
		}
	}
	cout << "Tich cua 2 ma tran la\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << tich[i][j];
		}
		cout << endl;
	}

}

int main()
{
	int a[M][N], n;
	cout << "Nhap cap cua ma tran vuong\n";
	cin >> n;

	TAO(a, n);
	XUAT(a, n);

	TONG(a, n);
	TICH(a, n);

	return 0;
}