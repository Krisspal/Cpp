#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
	int r;
	do
	{
		r = a % b;
		a = b;
		b = r;
	} while (b > 0);
	return a;
}

int main()
{
	
	int m, n;
	cout << "Nhap tu so:\n";
	cin >> m;
	cout << "Nhap mau so:\n";
	cin >> n;
	cout << "Ket qua rut gon cua phan so " << m << "/" << n << " la " << m / UCLN(m, n) << "/" << n / UCLN(m, n) << endl;

	system("pause");
	return 0;
}