#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
const int M = 10, N = 15;
int main()
{
	int a[M][N];
	int r, c, tong = 0, min = a[0][0], max = a[0][0], posmax1, posmax2, posmin1, posmin2;
	//Nhap so dong va cot
	/*do
	{
		cout << "Nhap so dong va so cot\n";
		cout << "So dong:\n";
		cin >> r;
		cout << "So cot:\n";
		cin >> c;
		if (r <= 0 || r > M || c <= 0 || c > N)
		{
			cout << "Nhap sai! Vui long nhap lai\n";
		}
	} while (r <= 0 || r > M || c <= 0 || c > N);*/
	//Tao mang
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	//Xuat mang
	cout << "Xuat mang:\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout <<setw(3) << a[i][j];
			cout << " ";
		}
		cout << endl;
	}
	//Tim max, min va tinh tong
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
				posmin1 = i;
				posmin2 = j;
			}

			if (a[i][j] > max)
			{
				max = a[i][j];
				posmax1 = i;
				posmax2 = j;
			}
			tong += a[i][j];
			
		}
	}
	cout << "Gia tri lon nhat trong mang la " << max  << " o vi tri a[" <<posmax1 << "][" << posmax2 <<"]" << endl;
	cout << "Gia tri nho nhat trong mang la " <<min << " o vi tri a[" << posmin1 << "][" << posmin2 << "]" << endl;
	cout << "Tong cac gia tri trong mang la " << tong << endl;

	return 0;
}
