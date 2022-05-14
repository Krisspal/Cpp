/*Cho ma trận vuông a có kích thước n(nhập từ bàn phím và n lớn hơn hoặc bằng 5 và nhỏ hơn 100) chứa các số nguyên. Viết chương trình thực hiện các chức năng sau :
- Nhập ma trận
- Sinh ma trận, với các số nguyên được sinh ngẫu nhiên trong khoảng từ 2 đến 1000.
- Xuất ma trận.
- Tính tổng ma trận trên từng dòng và trên từng cột.
- Tính tổng các phần tử trên đường chéo chính của ma trận.
- Tìm các số nguyên tố đường biên của ma trận.*/

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
			a[i][j] = 2 + (rand() % 999);
		}
	}
}
void XUATMATRAN(int** a, int n)
{
	cout << "Xuat ma tran\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int TONGDONG(int** a, int n, int dong)
{
	int tong = 0;
	for (int j = 0; j < n; j++)
	{
		tong += a[dong][j];
	}
	return tong;
}
int TONGCOT(int** a, int n, int cot)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i][cot];
	}
	return tong;
}
int TONGDUONGCHEOCHINH(int** a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				tong += a[i][j];
			}
		}
	}
	return tong;
}
bool KTNGUYENTO(int n)
{
	bool laNguyento = true;
	if (n < 2)
	{
		laNguyento = false;
	}
	else
	{
		for (int i = 2; i < n / 2; i++)
		{
			if (n % i == 0)
			{
				laNguyento = false;
				break;
			}
		}
	}
	return laNguyento;
}
void XUAT_NGUYENTO_BIEN(int** a, int n)
{
	cout << "Cac phan tu nguyen to o duong bien ma tran la\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i == 0 || j == 0 || (i = n - 1) || (j = n - 1)) && KTNGUYENTO(a[i][j]))
			{
				cout << a[i][j] << "\t";
			}
		}
	}
}
int main()
{
	int** p, capMatran;
	
	srand((unsigned)time(NULL));
	
	do
	{
		cout << "Nhap kich thuong cua ma tran vuong (5 <= n < 100)\n";
		cin >> capMatran;
		if (capMatran < 5 || capMatran >= 100)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (capMatran < 5 || capMatran >= 100);
	
	//Cap phat mang
	p = new int* [capMatran];
	for (int i = 0; i < capMatran; i++)
	{
		p[i] = new int[capMatran];
	}

	TAOMATRAN(p, capMatran);
	XUATMATRAN(p, capMatran);
	
	//Tinh tong
	cout << "Tong cua tung dong:\n";
	for (int i = 0; i < capMatran; i++)
	{
		cout << "Dong " << i + 1 << ": " << TONGDONG(p, capMatran, i) << endl;
	}
	cout << "Tong cua tung cot:\n";
	for (int i = 0; i < capMatran; i++)
	{
		cout << "Cot " << i + 1 << ": " << TONGCOT(p, capMatran, i) << endl;
	}
	cout << "Tong cac phan tu tren duong cheo chinh la " << TONGDUONGCHEOCHINH(p, capMatran) << endl;
	
	//Xuat cac so nguyen to bien
	XUAT_NGUYENTO_BIEN(p, capMatran);
	
	//Huy cap phat
	for (int i = 0; i < capMatran; i++)
	{
		delete[]p[i];
	}
	delete[]p;
	p = 0;
	
	return 0;
}
