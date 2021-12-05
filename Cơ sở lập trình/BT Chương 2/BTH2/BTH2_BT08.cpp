#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;

	cout << "Nhap gia mua cua san pham: "; 
	cin >> a;
	cout << "Gia ban san pham la: " << int(a + a * 60 / 100) << endl;

	system("pause");
	return 0;
}