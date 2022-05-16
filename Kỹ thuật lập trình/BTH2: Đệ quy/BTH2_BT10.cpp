#include <iostream>

using namespace std;

double UCLN(int a, int b)
{
	if (b == 0)
		return a;
	else
		return UCLN(b, a % b);
}
int main()
{
	int a, b;
	cout << "Nhap 2 so nguyen a va b\n";
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << UCLN(a, b) << endl;
	return 0;
}