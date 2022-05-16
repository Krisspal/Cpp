#include <iostream>
#include <cmath>

using namespace std;

int HE2TO10(int n)
{
	if (n == 0)
		return 0;
	else
		return n % 10 + 2 * (HE2TO10(n / 10));
}
int main()
{
	int n;
	cout << "Nhap so he 2 can chuyen doi\n";
	cin >> n;
	cout << "So he 10 cua " << n << " la " << HE2TO10(n) << endl;
	return 0;
}