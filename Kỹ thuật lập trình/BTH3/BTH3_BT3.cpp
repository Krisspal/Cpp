#include <iostream>

using namespace std;
int UCLN(int x, int y)
{
	int* a, * b, q;
	a = &x;
	b = &y;
	if (*a == 0)
		return *b;
	else
	{
		q = *a % *b;
		*b = *a;
		*a = q;
	}
	return UCLN(*a, *b);
}

int main()
{
	int a, b;
	cout << "Nhap gia tri cua 2 so nguyen\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "UCLN cua " << a << " va " << b << " la " << UCLN(a, b) << endl;
	return 0;
}