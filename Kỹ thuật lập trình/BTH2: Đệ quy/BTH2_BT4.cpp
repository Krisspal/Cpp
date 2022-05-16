#include <iostream>

using namespace std;

int MU(int x, int n)
{
	if (n == 1)
		return x;
	else
		return MU(x, n - 1) * x;
}

int main()
{
	int x, n;
	cout << "Nhap so nguyen x\n";
	cin >> x;
	cout << "Nhap so nguyen n\n";
	cin >> n;
	cout << x << "^" << n << " = " << MU(x, n) << endl;
	return 0;
}