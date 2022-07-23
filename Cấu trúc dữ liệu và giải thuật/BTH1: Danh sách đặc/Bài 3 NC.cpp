#include <iostream>
#include <iomanip>
#include <cmath>
#define MAX 100

using namespace std;

void menu()
{
	cout << "Chon loai danh sach muon tao\n";
	cout << "1. Danh sach gom cac phan tu la so nguyen to\n";
	cout << "2. Danh sach cac so hoan thien\n";
	cout << "3. Danh sach cac so chinh phuong\n";
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

bool isPerfect(int a)
{
	int sum = 0;
	for (int i = 1; i <= a / 2; i++)
	{
		sum += i;
	}
	if (sum == a)
		return true;
	return false;
}

bool isPerfectSquare(long double x)
{
	if (x >= 0) 
	{
		long long sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}

bool isPrime(int n)
{
	bool isPrime = true;
	if (n < 2)
	{
		isPrime = false;
	}
	
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	} 
	return isPrime;
}

void input(int a[], int& n, int chon)
{
	nhap_n(n);

	switch (chon)
	{
	case 1:
		for (int i = 0; i < n; i++)
		{
			do
			{
				cout << "Nhap phan tu thu " << i + 1 << endl;
				cin >> a[i];
				if (isPrime(a[i]) == false)
				{
					cout << a[i] << " khong phai so nguyen to\n";
				}
			} while (isPrime(a[i]) == false);
		}
		break;
	case 2:
		for (int i = 0; i < n; i++)
		{
			do
			{
				cout << "Nhap phan tu thu " << i + 1 << endl;
				cin >> a[i];
				if (isPerfect(a[i]) == false)
				{
					cout << a[i] << " khong phai so hoan thien\n";
				}
			} while (isPerfect(a[i]) == false);
		}
		break;
	case 3:
		for (int i = 0; i < n; i++)
		{
			do
			{
				cout << "Nhap phan tu thu " << i + 1 << endl;
				cin >> a[i];
				if (isPerfectSquare(a[i]) == false)
				{
					cout << a[i] << " khong phai so hoan thien\n";
				}
			} while (isPerfectSquare(a[i]) == false);
		}
		break;
	}
}

void output(int a[], int n)
{
	cout << "Xuat mang tren nhieu dong\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << a[i];
		if (i % 10 == 9)
			cout << endl;
	}
	cout << endl;
}

int main()
{
	int a[MAX];
	int n, chon;
	menu();
	cin >> chon;
	input(a, n, chon);
	output(a, n);
	return 0;
}