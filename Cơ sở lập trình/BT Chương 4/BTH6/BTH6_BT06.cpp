#include <iostream>

using namespace std;

int daonguoc(int a)
{
	int tam = a, a1 = 0, chs;
	while (tam > 0)
	{
		chs = tam % 10;
		a1 = a1 * 10 + chs;
		tam = tam / 10;
	}
	return a1;
}

int main()
{
	int n;
	do
	{
		cout << "Nhap so nguyen n:\n";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai!Vui long nhap lai!\n";
	} while (n <= 0);
	cout << "So dao nguoc cua " << n << " la " << daonguoc(n) << endl;

	system("pause");
	return 0;
}