#include <iostream>
#include <iomanip>
#include <ctime>
#define MAX 100

using namespace std;

void nhap_n(int& n)
{
	do
	{
		cout << "Nhap so phan tu cua danh sach\n";
		cin >> n;
		if (n < 0 || n > 100)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n < 0 || n > 100);
}

void menu(int x)
{
	cout << "In ra:\n";
	cout << "1. Cac phan tu co vi tri sau " << x << endl;
	cout << "2. Cac phan tu nho hon " << x << endl;
	cout << "3. Cac boi so cua " << x << endl;
	cout << "4. Uoc so cua " << x << endl;
}

void input(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		/*cout << "Nhap phan tu thu " << i + 1 << endl;
		cin >> a[i];*/
		a[i] = rand() % 100;
	}
}

void output1(int a[], int n)
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

int search(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void output2(int a[], int n, int index, int x, int &chon)
{
	if (index != -1)
	{
		cout << "Chon ";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			if (index != -1)
			{
				for (int i = index; i < n; ++i)
				{
					cout << setw(9) << a[i];
					if (i % 10 == 9)
					{
						cout << endl;
					}
				}
			}
			break;
		}
		case 2:
		{
			for (int i = 0; i < n; ++i)
			{
				if (a[i] < x)
				{
					cout << setw(9) << a[i];
					if (i % 10 == 9)
					{
						cout << endl;
					}
				}
				else
				{
					continue;
				}
			}
			break;
		}
		case 3:
		{
			for (int i = 0; i < n; ++i)
			{
				if (a[i] % x == 0)
				{
					cout << setw(9) << a[i];
					if (i % 10 == 9)
					{
						cout << endl;
					}
				}
				else
				{
					continue;
				}
			}
			break;
		}
		case 4:
		{
			for (int i = 0; i < n; ++i)
			{
				if (x % a[i] == 0)
				{
					cout << setw(9) << a[i];
					if (i % 10 == 9)
					{
						cout << endl;
					}
				}
				else
				{
					continue;
				}
			}
			break;
		}
		}
	}
	else
		cout << "Khong tim thay " << x << endl;
}
int main()
{
	srand(time(NULL));
	int a[MAX];
	int n, x, index, chon;
	nhap_n(n);
	input(a, n);
	output1(a, n);
	cout << "Nhap gia tri can tim:\n";
	cin >> x;
	menu(x);
	int pos = search(a, n, x);
	output2(a, n, pos, x, chon);
	return 0;
}