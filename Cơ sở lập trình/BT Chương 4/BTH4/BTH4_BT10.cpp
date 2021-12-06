#include <iostream>

using namespace std;

int main()
{
	int i = 2, n;
	do
	{
		cout << "Nhap so n: "; 
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Hay nhap lai! \n";

	} while (n <= 0);
	cout << n << " co cac thua so nguyen to: ";
	do
	{
		while (n % i != 0)
			i++;
		cout << i;
		n = n / i;
		if (n > 1)
			cout << " , ";
	} while (n > 1);

	cout << endl;
	system("pause");
	return 0;
}