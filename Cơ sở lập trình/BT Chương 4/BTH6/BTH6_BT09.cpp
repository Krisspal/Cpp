#include <iostream>

using namespace std;

int tongchuso(int a)
{
	int tong = 0,chs = a;
	while (chs > 0)
	{
		tong += chs % 10;
		chs = chs / 10;
	}
	return tong;
}

int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen:\n";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai vui! Vui long nhap lai!\n";
	} while (n <= 0);
	cout << "Tong cac chu so cua " << n << " la " << tongchuso(n) << endl;


	system("pause");
	return 0;
}