#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int MAXSIZE = 100;
int main()
{
	double n, tong = 0;
	double a[MAXSIZE];

	cout << "Nhap so phan tu n:\n";
	cin >> n;

	cout << "Nhap cac phan tu:\n";
	for (int i = 0; i < n; i++)
	/*{
		cout << "Phan tu " << i << ": ";
		cin >> a[i];
	}*/
	a[i] = rand() % 100;

	//Xuat mang
	cout << "Cac phan tu trong mang:\n";
	for (int i = 0; i < n; i++)
		if (i % 10 == 0)
			cout << endl;
		cout << setw(9) << a[i];

	cout << endl;
	//Tinh tong
	for (int i = 0; i < n; i++)
		tong += a[i];

	cout << "Tong cac phan tu trong mang la " << tong << endl;
	cout << "Trung binh cong cac phan tu trong mang la " << (double)tong / n << endl;

	system("pause");
	return 0;
}
