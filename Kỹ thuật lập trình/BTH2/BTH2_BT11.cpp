#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int  TONG(int a[20], int n)
{
	if (n == 1)
		return a[0];
	else
		return TONG(a, n - 1) + a[n - 1];
}

int main()
{
	int a[20], n;
	cout << "Nhap so phan tu cua mang (n <= 20)\n";
	cin >> n;
	//Tao mang
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
	//Xuat mang
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << a[i];
		
	}
	cout << endl;
	cout << "Tong cac phan tu trong mang la " << TONG(a, n) << endl;
	return 0;
}