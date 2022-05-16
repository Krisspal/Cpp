#include<iostream>
#include<cstdlib>
using namespace std;
void Mang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(a + i) = rand() % 10;
		cout << " " << *(a + i);
	}
}
int* Tim(int* a, int n, int x)
{
	int* p;
	p = NULL;
	for (int i = 0; i < n; i++)
		if (*(a + i) == x)
		{
			p = &i;
			return p;
		}
	return p;
}
int main()
{
	int* a, n, x;
	do
	{
		cout << "Nhap vao so phan tu cua mang: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Hay nhap lai\n";
	} while (n <= 0);
	a = new int[n];
	Mang(a, n);
	cout << endl;
	cout << "Nhap vao gia tri can tim: ";
	cin >> x;
	if (Tim(a, n, x) == NULL)
		cout << "Khong tim thay " << x << endl;
	else
		cout << "Tim thay " << x << " tai vi tri " << Tim(a, n, x) << endl;
	delete[]a;
	a = 0;
	return 0;
}