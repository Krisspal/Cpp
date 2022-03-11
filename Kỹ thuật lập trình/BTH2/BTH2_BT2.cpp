#include <iostream>

using namespace std;

int GT(int n)
{
	if (n == 0)
		return 1;
	else
		return GT(n - 1) * n;
}

int main()
{
	int n;
	cout << "Nhap so nguyen n\n";
	cin >> n;
	cout << n << "! = " << GT(n) << endl;
	return 0;
}