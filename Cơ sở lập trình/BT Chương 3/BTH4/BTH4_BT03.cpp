#include <iostream>

using namespace std;

int main()
{
	int n, i = 1, tgLe = 0, tgChan = 0;
	do
	{
		cout << "Nhap so nguyen: "; 
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai! Nhap lai \n";
	}while (n <= 1);
	while (i <= n)
	{
		if (i % 2 == 0)
		{
			tgChan += i;
			i++;
		}

		else
		{
			tgLe += i;
			i++;
		}
	}
	cout << "Tong chan trong pham vi tu 1 den " << n << " la: " << tgChan << endl;
	cout << "Tong le trong pham vi tu 1 den " << n << " la: " << tgLe << endl;

	system("pause");
	return 0;
}