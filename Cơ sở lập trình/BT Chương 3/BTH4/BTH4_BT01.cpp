#include <iostream>

using namespace std;

int main()
{
	int i =1 ,n, tong = 0;
	do
	{
		cout << "Nhap vao so nguyen (n > 0): "; 
		cin >> n;
		if (n < 0)
			cout << "Nhap sai! Vui long nhap lai!\n";
	} while (n < 0);
	while (i <= n)
	{
		tong += i;
		i++;
	}
	cout << "Tong cac so tu " << 1 << " den " << n << " la " << tong << endl;
	system("pause");
	return 0;

	
}