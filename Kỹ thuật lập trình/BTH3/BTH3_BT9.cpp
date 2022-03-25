#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
bool KTNT(int n)
{
	if (n < 2)
		return false;
	else
		for (int i = 2; i < sqrt(double(n)); i++)
			if (n % i == 0)
				return false;
	return true;
}
int* Tong(int** a, int r, int c)
{
	int* kq;
	kq = new int;
	*kq = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (KTNT(a[i][j]))
				*kq += a[i][j];
	return kq;
}
int main()
{
	int** a, r, c;
	do
	{
		cout << "Nhap vao so dong so cot cua mang: \n";
		cin >> r >> c;
		if (r <= 0 || c <= 0)
			cout << "Nhap sai! Hay nhap lai\n";
	} while (r <= 0 || c <= 0);
	a = new int* [r];
	for (int i = 0; i < r; i++)
		a[i] = new int[c];
	cout << "Xuat mang: \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 20;
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	cout << "Tong cac so nguyen to trong mang: " << *Tong(a, r, c) << endl;
	for (int i = 0; i < r; i++)
		delete a[i];
	delete[]a;
	a = 0;
	system("pause");
	return 0;
}