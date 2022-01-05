#include <iostream>
#include <iomanip>
using namespace std;

int GT(int n)
{
	int kq = 1;
	for (int i = 1; i <= n; i++)
		kq *= i;
	return kq;
}

int tohop(int n, int k)
{
	int kq;
	kq = GT(n) / (GT(k) * GT(n -k));
	return kq;
}

void TGPCAL(int h)
{
	cout << "   k |	0	1	2	3	4	5	... " << endl;
	cout << "---- | -------------------------- " << endl;

	for (int i = 0; i < h; i++)
	{
		cout << setw(3) << i << "  |";
		for (int j = 0; j <= i; j++)
			cout << setw(4) << tohop(i, j);
		cout << endl;
	}
}

int main()
{
	int n,k, h;
	do
	{
		cout << "Nhap so nguyen duong n va k:\n";
		cin >> n >> k;
		cout << "Nhap chieu cao:\n";
		cin >> h;
		if (n <= 0 || h <= 0 || k <= 0 || n < k)
			cout << "Nhap sai! Vui long hap lai\n";
	} while (n <= 0 || h <= 0 || k <= 0 || n < k);

	cout << "a) " << n << "! = " << GT(n) << endl;
	cout << "b)" << tohop(n, k) << endl;
	TGPCAL(h);
	system("pause");
	return 0;
}
