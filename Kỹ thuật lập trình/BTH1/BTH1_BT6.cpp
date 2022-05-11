#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void TAOMATRAN(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
}
void XUATMATRAN(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(9) << a[i][j];
		}
		cout << endl;
	}
}
void TONG(int** p1, int** p2, int n)
{
	int** tong;
	tong = new int* [n];
	for (int i = 0; i < n; i++)
	{
		tong[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tong[i][j] = p1[i][j] + p2[i][j];
		}
	}
	XUATMATRAN(tong, n);
	for (int i = 0; i < n; i++)
	{
		delete []tong[i];
	}
	delete[]tong;
	tong = 0;
}
void TICH(int** p1, int** p2, int n)
{
	int** tich;
	tich = new int* [n];
	for (int i = 0; i < n; i++)
	{
		tich[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tich[i][j] = p1[i][j] * p2[i][j];
		}
	}
	XUATMATRAN(tich, n);
	for (int i = 0; i < n; i++)
	{
		delete[]tich[i];
	}
	delete[]tich;
	tich = 0;
}
int main()
{
	int** p1, ** p2, ** tong, ** tich, n;
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
	//Cap phat mang
	p1 = new int* [n];
	p2 = new int* [n];
	for (int i = 0; i < n; i++)
	{
		p1[i] = new int[n];
		p2[i] = new int[n];
	}
	//Tao ma tran
	TAOMATRAN(p1, n);
	TAOMATRAN(p2, n);
	//Xuat ma tran
	cout << "Ma tran 1\n";
	XUATMATRAN(p1, n);
	cout << "Ma tran 2\n";
	XUATMATRAN(p2, n);
	//Tinh tong 2 ma tran
	cout << "Tong 2 ma tran\n";
	TONG(p1, p2, n);
	//Tinh tich 2 ma tran
	cout << "Tich 2 ma tran\n";
	TICH(p1, p2, n);
	return 0;

}
