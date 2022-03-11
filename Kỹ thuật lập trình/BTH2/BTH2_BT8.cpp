#include <iostream>

using namespace std;

int HE10TO2(int n)
{
	if (n == 0)
		return 0;
	else
		return n % 2 + 10 * (HE10TO2(n / 2));
}
int main()
{
	int n;
	cout << "Nhap so can chuyen doi\n";
	cin >> n;
	cout << "So he 2 cua " << n << " la " << HE10TO2(n) << endl;
	return 0;
}