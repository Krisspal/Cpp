#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int const MAXSIZE = 100;

int main()
{
	int n, max, a[MAXSIZE];

	cout << "Nhap so phan tu n:\n";
	cin >> n;
	cout << "Nhap gia tri cac phan tu\n";
	for (int i = 0; i < n; i++)
		cout << "Phan tu " << i << ": ",
		cin >> a[i];
	/*	a[i] = rand() % 100;*/

	cout << "\nXuat mang:\n";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << setw(9) << a[i];
	}
	max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];

	cout << "\n\nPhan tu lon nhat cua mang la " << max << endl;
	system("pause");
	return 0;
}
