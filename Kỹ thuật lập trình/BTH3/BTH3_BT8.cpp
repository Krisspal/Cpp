#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
	int** a, h;
	do
	{
		cout << "Nhap cap cua ma tran\n";
		cin >> h;
		if (h <= 0)
		{
			cout << "Nhap sai! Vui long nhap lai\n";
		}
	} while (h <= 0);
	a = new int*[h];
	for (int i = 0; i < h; i++)
	{
		a[i] = new int[h];
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < h; i++)
		delete a[i];
	delete[]a;
	a = 0;
	return 0;
}