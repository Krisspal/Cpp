#include <iostream>
#include <cstdlib>

using namespace std;

int DEM(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

const int MAXSIZE = 100;

int main()
{
	int a[MAXSIZE], n, x;
	cout << "Nhap kich thuoc cua mang:\n";
	cin >> n;
	cout << "Xuat mang" << endl;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 20 + 1;
		cout << a[i] << " ";
	}

	cout << "\nNhap phan tu x:\n";
	cin >> x;
	
	cout <<"So lan xuat hien cua x la: " << DEM(a, n, x) << endl;

	system("pause");
	return 0;
}
