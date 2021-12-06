#include <iostream>

using namespace std;

int main()
{
	int n, chs, tam, n1 = 0;
	do
	{
		cout << "Nhap so nguyen: "; 
		cin >> n;
		if (n <= 0)
			cout << "Ban da nhap sai! Vui long nhap lai\n";
	} while (n <= 0);
	tam = n;
	while (tam > 0)
	{
		chs = tam % 10;
		n1 = n1 * 10 + chs;
		tam = tam / 10;
	}
	cout << "So dao cua so " << n << " la " << n1 << endl;
	system("pause");
	return 0;
}
