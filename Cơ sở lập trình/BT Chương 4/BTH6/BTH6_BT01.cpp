#include <iostream>

using namespace std;

double dientich(int a, int b)
{
	double dientich;
	dientich = a * b;
	return dientich;
}

double chuvi(int a, int b)
{
	double chuvi;
	chuvi = (a + b) * 2;
	return chuvi;
}

int main()
{
	int d, r;
	cout << "Nhap chieu dai, chieu rong hinh chu nhat:\n";
	cin >> d >> r;
	cout << "Dien tich hinh chu nhat la: " << dientich(d, r) << endl;
	cout << "Chu vi hinh chu nhat la: " << chuvi(d, r) << endl;

	system("pause");
	return 0;
}