//In ma tran theo dang zig zag cot

#include <iostream>
#include <iomanip>
using namespace std;

void TAOMANG(int** a, int n)
{
	for (int i = 0; i < n; i++)//Dong 
	{
		for (int j = 0; j < n; j++)//Cot
		{
			if (j % 2 == 0)
			{
				a[i][j] = (n * j) + i + 1;
			}
			else
			{
				a[i][j] = (n * (j + 1)) - i;
			}
		}
	}
}

void XUATMANG(int** a,const int n)
{
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(9) << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int** p, n;
	
	do
	{
		cout << "Nhap so nguyen n\n";
		cin >> n;
		if (n < 1 || n > 10)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n < 1 || n > 10);
	
	//Cap phat mang
	p = new int* [n];
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	
	//Tao mang va xuat mang
	TAOMANG(p, n);
	XUATMANG(p, n);
	
	//Huy cap phat
	for (int i = 0; i < n; i++)
	{
		delete[]p[i];
	}
	delete[]p;
	p = NULL;
	return 0;
}
