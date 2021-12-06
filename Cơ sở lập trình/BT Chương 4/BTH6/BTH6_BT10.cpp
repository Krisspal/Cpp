#include <iostream>

using namespace std;

bool sohoanthien(int a)
{
	bool kq = true;
	int i = 1, tong = 0;
	while (i <= (a / 2))
	{
		if (a % i == 0)
			tong += i;
		i++;
	}

	if (tong != a)
		 kq = false;
	return kq;
}

int main()
{
	int n;
	cout << "Nhap vao so nguyen :\n";
	cin >> n;
	if (sohoanthien(n))
		cout << n << " la so hoan thien\n";
	else
		cout << n << " khong la so hoan thien\n";

	system("pause");
	return 0;
}