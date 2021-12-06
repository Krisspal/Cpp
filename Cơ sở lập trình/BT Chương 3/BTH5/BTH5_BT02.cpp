#include <iostream>
 
using namespace std;

int main()
{
	int m, n, tong = 0;
	do
	{
		cout << "Ban can bao nhieu so: "; 
		cin >> m;
		if (m <= 0)
			cout << "Nhap sai! Vui long nhap lai\n";

	} while (m <= 0);
	for (int i = 1; i <= m; i++)
	{
		cout << "Nhap so thu " << i << ": "; cin >> n;
		tong = tong + n;
	}
	cout << "Tong " << m << " so vua nhap la: " << tong << endl;

	system("pause");
	return 0;
}