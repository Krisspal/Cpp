#include <iostream>

using namespace std;

int main()
{
	int* p, n, * a, max, *m;
	do
	{
		cout << "Nhap so phan tu cua mang (n <= 30)\n";
		cin >> n;
		if (n <= 0 || n > 30)
			cout << "Nhap sai!Vui long nhap lai\n";
	} while (n <= 0 || n > 30);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
	cout << endl;
	p = a;
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(p + i);
	}
	cout << endl;
	cout << "Cac phan tu le cua mang la\n";
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) % 2 != 0)
		{
			cout << " " << *(p + i);
		}
	}
	cout << endl;
	m = &a[0];
	for (int i = 1; i < n; i++)
	{
		if (*(a + i) > *m)
		{
			max = *(a + i);
			m = (a + i);
		}
	}
	delete[]a;
	a = 0;
	cout << "Gia tri lon nhat trong mang la " << max << endl;
	cout << "Dia chi cua phan tu la " << m << endl;
	return 0;

}