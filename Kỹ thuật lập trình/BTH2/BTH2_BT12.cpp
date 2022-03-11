#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int MIN(int a[20], int n)
{
	if (n == 1)
		return a[0];
	else
	{
		if (MIN(a, n - 1) > a[n - 1])
			return a[n - 1];
		else
			return MIN(a, n - 1);
	}
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
		cout << setw(5) << a[i];
	}
	cout << endl;
	cout << "Phan tu nho nhat trong mang la " << MIN(a, n) << endl;
	return 0;
}