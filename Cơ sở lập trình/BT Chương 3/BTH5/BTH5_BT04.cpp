#include <iostream>

using namespace std;

int main()
{
	int n, tich = 1;
	do
	{
		cout << "Nhap n (n >0): "; 
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Vui long nhap lai\n";
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
	{
		tich = tich * i;
	}
	cout << "Ket qua " << n << "! la " << tich << endl;

	system("pause");
	return 0;
}

