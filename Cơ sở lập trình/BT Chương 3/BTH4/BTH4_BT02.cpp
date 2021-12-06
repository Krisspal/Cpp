#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	double n, tich = 1;
	do
	{
		cout << "Nhap vao so nguyen (n > 1): "; 
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai! Vui long nhap lai!\n";
	} while (n <= 1);
	while (i <= n)
	{
		if (i % 2 != 0)
			tich = tich * i;
		i++;
	
	}
	cout << "Tich cac so le tu 1 den " << n << " la " << tich << endl;
	system("pause");
	return 0;
}
