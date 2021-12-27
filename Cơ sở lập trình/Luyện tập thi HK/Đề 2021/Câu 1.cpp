#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void menu() 
{
	cout << "1. In ra cac so nguyen to khong vuot qua n\n"
		"2. Tinh tich tat ca cac so nguyen to khong vuot qua n\n"
		"3. In ra cac so he 2 tu 1 den n\n"
		"4. Thoat\n";
}

bool KTNT(int n)
{
	int i = 2;
	bool laNguyenTo = true;
	while (i <= sqrt(static_cast<double>(n)) && laNguyenTo == true)
	{
		if (n % i == 0)
			laNguyenTo = false;
		i++;
	}
	return laNguyenTo;
}

int Tich_NT(int n)
{
	int kq = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		bool laNguyenTo = true;
		if (n % i == 0)
		{
			continue;
		}
		else
			kq *= i;
	}
	return kq;
}

int He10_2(int n)
{
	int kq = 0, i = 0;
	while (n > 0)
	{
		kq = kq + (n % 2) * pow(10, i);
		n /= 2;
		i++;
	} 
	return kq;
}

int main()
{
	int n, chon;
	do
	{
		menu();
		cout << "Chon 1 so\n";
		cin >> chon;
		if (chon == 4)
			break;
		cout << "Nhap so nguyen n\n";
		cin >> n;
		switch (chon)
		{
		case 1:
		{
			cout << "Cac so nguyen to tu 1 den " << n << " la\n";
			for (int j = 2; j <= n; j++)
			{
				if (KTNT(j) == true)
				{
					cout << j << " ";
				}
			}
			cout << endl;
			break;
			
		}

		case 2:
		{
			cout << "Tich cac so nguyen to tu khong vuot qua " << n << " la " << Tich_NT(n);
			cout << endl << endl;
			break;
		}

		case 3:
		{
			cout << "Cac so tu he 10 chuyen sang he 2 la:\n";
			for (int i = 1; i <= n; i++)
			{
				cout << i << " = " << He10_2(i) << endl;
			}
			cout << endl;
			break;
		}
		
		}

	} while (chon != 4);
	return 0;
}
