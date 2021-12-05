#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c, d;

	cout << "Nhap toa do diem 1: "; 
	cin >> a >> b; 
	cout << "Nhap toa do diem 2: "; 
	cin >> c >> d;

	cout << "Khoang cach hai diem la: " << sqrt((c - a) * (c - a) + (d - b) * (d - b)) << endl;

	system("pause");
	return 0;
}