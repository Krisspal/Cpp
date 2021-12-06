#include <iostream>

using namespace std;

double tinhMu(int a, int b);

int main()
{
	int x, y;
	cout << "Nhap so mu:\n";
	cin >> y;
	cout << "Nhap so x:\n";
	cin >> x;
	cout << x << " ^ " << y << " = " << tinhMu(x, y) << endl;
	system("pause");
	return 0;
}

double tinhMu(int a, int b)
{
	int tich = a;
	for (int i = 1; i <=b; i++)
	{
		tich *= a;
	}
	return tich;
}