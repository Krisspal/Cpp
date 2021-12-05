#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Khai bao bien
	double r;
	const double pi = 3.141593;

	cout << "Nhap ban kinh hinh tron: " << endl;
	cin >> r;

	cout << "Chu vi hinh tron la: " << 2 * pi * r << endl;
	cout << "Dien tich hinh tron la: " << pi * r * r << endl;

	system("pause");
	return 0;

}
