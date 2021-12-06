#include <iostream>

using namespace std;

int main()
{
	int n, n1 = 0, chs;
	do
	{
		cout << "Nhap so nguyen: "; 
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Nhap lai\n";
	}while (n <= 0);
	while (n > 0)
	{
		chs = n % 10;
		n1 = n1 * 10 + chs;
		n = n / 10;
	}
	while (n1 > 0)
	{
		chs = n1 % 10;
		cout << chs << " ";
		n1 = n1 / 10;
	}
	cout << endl;
	system("pause");
	return 0;

}
