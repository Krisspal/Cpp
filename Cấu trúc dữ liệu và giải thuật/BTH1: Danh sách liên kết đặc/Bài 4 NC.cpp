#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#define MAX 100

using namespace std;

void menu()
{
	cout << "Chon loai phan tu muon liet ke\n";
	cout << "1. Cac phan tu le\n";
	cout << "2. Cac phan tu chan\n";
	cout << "3. Cac phan tu am\n";
	cout << "4. Cac phan tu duong\n";
}

void nhap_n(int& n)
{
	do
	{
		cout << "Nhap so phan tu cua danh sach\n";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n < 0);
}

void input(int a[], int& n)
{
	nhap_n(n);
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 200 - 100;
	}
	
}

void output(int a[], int n)
{
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << a[i];
		if (i % 10 == 9)
			cout << endl;
	}
	cout << endl;
}

void filter(int a[], int n, int& chon)
{
	cout << "Nhap loai phan tu muon liet ke\n";
	cin >> chon;

	switch (chon)
	{
	case 1:
		cout << "Cac phan tu le trong danh sach la\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
			{
				cout << setw(9) << a[i];
			}
			if (i % 10 == 9)
				cout << endl;
		}
		break;
	case 2:
		cout << "Cac phan tu chan trong danh sach la\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
			{
				cout << setw(9) << a[i];
			}
			if (i % 10 == 9)
				cout << endl;
		}
		break;
	case 3:
		cout << "Cac phan tu am trong danh sach la\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				cout << setw(9) << a[i];
			}
			if (i % 10 == 9)
				cout << endl;
		}
		break;
	case 4:
		int dem = 0;
		cout << "Cac phan tu am trong danh sach la\n";
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				cout << setw(9) << a[i];
			}
			if (i % 10 == 9)
				cout << endl;
		}
		break;
	}
}
int main()
{
	srand(time(0));
	int a[MAX];
	int n, chon;
	input(a, n);
	output(a, n);
	menu();
	filter(a, n, chon);
	return 0;
}