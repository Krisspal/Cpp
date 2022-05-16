#include <iostream>

using namespace std;
void DAONGUOC(int* a, int n)
{
	int* p, * q, temp;
	p = a, q = a + (n - 1);
	while (p < q)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}

int main()
{
	int n, * a, * p;
	cout << "Nhap chieu dai cua mang\n";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 20;
	}
	p = a;
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(p + i);
	}
	cout << endl;
	DAONGUOC(p, n);
	cout << "Mang sau khi da dao nguoc\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(p + i);
	}
	cout << endl;
	delete[]a;
	a = 0;
	return 0;
}