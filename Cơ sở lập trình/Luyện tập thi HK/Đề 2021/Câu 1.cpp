#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void MENU()
{
	cout << "1.In ra cac so nguyen to khong vuot qua n\n";
	cout << "2.Tinh tich tat ca cac nguyen to kohng vuot qua n\n";
	cout << "3.In ra cac so he 2 tu 1 den n\n";
	cout << "4.Thoat\n";
}

bool KTNT(int n)
{
	bool laNguyenTo = true;
	if (n < 2)
	{
		laNguyenTo = false;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				laNguyenTo = false;
				break;
			}
		}
	}
	return laNguyenTo;
}

int Tich_NT(int n)
{
	int kq = 1;
	for (int i = 2; i <= n; i++)
	{
		if (KTNT(i))
		{
			kq *= i;
		}
		else
			continue;
	}
	return kq;
}

int He10_2(int n)
{
	int bin = 0, i = 0;
	while (n > 0)
	{
		bin = bin + (n % 2) * pow(10, i);
		n = n / 2;
		i++;
	}
	return bin;
}

int main()
{
	int n, chon;
	do 
	{
		MENU();
		cout << "Nhap so muon chon\n";
		cin >> chon;
		if (chon == 4)
		{
			break;
		}
		cout << "Nhap so nguyen n (n > 0)\n";
		cin >> n;
		switch (chon)
		{
		case 1:
		{
			cout << "Cac so nguyen to tu 2 den " << n << " la:\n";
			for (int i = 2; i < n; i++)
			{
				if (KTNT(i))
					cout << i << " ";
			}
			cout << endl;
			break;
		}
		case 2:
		{
			cout << "Tich cac so nguyen to tu 2 den " << n << " la: " << Tich_NT(n);
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "Cac so he 2 tu 1 den n\n";
			for (int i = 1; i <= n; i++)
			{
				cout << i << ": " << He10_2(i) << endl;
			}
			break;
		}
		}
		if (chon < 1 || chon > 4 || n <= 0)
			cout << "Nhap sai! Nhap lai\n";
		cin.ignore();
	} while (chon < 1 || chon > 4 || n <= 0 || chon != 4);
	return 0;
}
