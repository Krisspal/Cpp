#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
const int M = 50, N = 50;
int main()
{
	int a[M][N], b[M][N], tong[M][N], tich[M][N],
		n;

	//Nhap cap cua 2 ma tran vuong
	do
	{
		cout << "Nhap cap cua 2 ma tran vuong\n";
		cin >> n;
		if (n > 50 || n <= 0)
		{
			cout << "Nhap sai! Vui long nhap lai\n";
		}
	} while (n > 50 || n <= 0);
	//Tao ma tran 1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	//Tao ma tran 2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = rand() % 100;
		}
	}
	//Xuat ma tran
	cout << "Ma tran 1\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
	cout << "Ma tran 2\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << b[i][j];
		}
		cout << endl;
	}
	//Tinh tong 2 ma tran
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tong[i][j] = a[i][j] + b[i][j];
		}
	}
	//Tinh tich 2 ma tran
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tong = 0;
			for (int r = 0; r < n; r++)
				tong = tong + a[i][r] * b[r][j];
			tich[i][j] = tong;
		}
		
	}
	//Xuat ket qua
	cout << "Tong cua 2 ma tran\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<setw(5) << tong[i][j];
		}
		cout << endl;
	}
	cout << "Tich cua 2 ma tran\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(9) << tich[i][j];
		}
		cout << endl;
	}
	
	return 0;
		
}