#include <iostream>

using namespace std;

int main()
{
	int n, dem = 0, chs, tam, tongChs = 0;
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
		tongChs += chs;
		dem++;
		tam = tam / 10;
	}
	cout << "So chu so cua " << n << " la " << dem << endl;
	cout << "Tong cac chu so cua " << n << " la " << tongChs << endl;

	system("pause");
	return 0;
}