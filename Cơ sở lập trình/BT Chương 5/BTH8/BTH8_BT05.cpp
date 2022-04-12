#include <iostream>
#include <iomanip>

using namespace std;

const int MAXSIZE = 100;

int main()
{
	int n, k, a[MAXSIZE];
	cout << "Nhap so phan tu n:\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	/*{
		cout << "Nhap phan tu " << i << ": ";
		cin >> a[i];
	}*/
	a[i] = rand() % 100;

	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << setw(9) << a[i];
	}
	cout << endl;
	cout << "Nhap vi tri can xoa (0 den " << n - 1 << "):";
	cin >> k;
	
	for (int i = k; i < (n - 1); i++)
		a[i] = a[i + 1];
		n--;
	cout << "Mang sau khi da xoa ky tu:\n";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << setw(9) << a[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
