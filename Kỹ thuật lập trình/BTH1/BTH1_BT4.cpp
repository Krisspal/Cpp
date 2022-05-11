//Update using pointer and function
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void TAOMANG(int** p, int r, int c)
{
	//Tao mang
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{ 
			p[i][j] = rand() % 100;
		}
	}
}
void XUATMANG(int** p, int r, int c)
{
	//Xuat mang
	cout << "Xuat mang\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << setw(9) << p[i][j];
		}
		cout << endl;
	}
}
void TINHTONG(int** p, int r, int c)
{
	int tong = 0, chon, chon1;//chon dung de chon dong hoac cot, chon1 de chon chi so dong hoac cot
	cout << "Tinh tong dong hoac cot\n";
	cout << "1.Dong\n";
	cout << "2.Cot\n";
	cout << "Chon 1 hoac 2: "; cin >> chon;
	switch (chon)
	{
	case 1:
	{
		cout << "Nhap so dong can tinh\n";
		cin >> chon1;
		chon1 = chon1 - 1;
		for (int j = 0; j < c; j++)
		{
			tong += p[chon1][j];
		}
		break;
	}
	case 2:
	{
		cout << "Nhap so cot can tinh\n";
		cin >> chon1;
		chon1 = chon1 - 1;
		for (int i = 0; i < r; i++)
		{
			tong += p[i][chon1];
		}
		break;
	}
	}
	if (chon == 1)
	{
		cout << "Tong cac phan tu tren dong la " << tong << endl;

	}
	else
		cout << "Tong cac phan tu tren cot la " << tong << endl;
}
void TIM(int** p, int r, int c)
{
	int posdong[50], poscot[50], n = 0, dem = 0, tim;//posdong va poscot dung de luu vi tri xuat hien
	bool check = false;
	cout << "Nhap so can tim trong mang\n";
	cin >> tim;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (p[i][j] == tim)
			{
				check = true;
				dem++;
				if (check == true)
				{
					posdong[n] = i;
					poscot[n] = j;
					n++;
				}
				else
					continue;
			}
		}
	}
	if (check)
	{
		cout << tim << " co xuat hien trong mang va xuat hien " << dem << " lan\n";
		for (int n = 0; n < dem; n++)
		{
			cout << "Xuat hien tai cac vi tri\n";
			cout << "Dong " << posdong[n] + 1 << " cot " << poscot[n] + 1 << endl;
		}
	}
	else
		cout << tim << " khong xuat hien trong mang\n";
}
int main()
{
	int r, c, tim;
	int** p;
	//Cap phat mang
	do
	{
		cout << "Nhap so dong\n";
		cin >> r;
		cout << "Nhap so cot\n";
		cin >> c;
		if (r < 1 || c < 1 || r > 5 || c > 6)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (r < 1 || c < 1 || r > 5 || c > 6);
	p = new int*[r];
	for (int i = 0; i < r; i++)
	{
		*(p + i) = new int[c];
	}
	TAOMANG(p, r, c);
	XUATMANG(p, r, c);
	TINHTONG(p, r, c);
	TIM(p, r, c);
	//Huy cap phat
	for (int i = 0; i < r; i++)
	{
		delete[]p[i];
	}
	delete[]p;
	p = NULL;
	return 0;
}
