#include <iostream>
#include  <iomanip>

using namespace std;

int main()
{
	int n;
	do
	{
		cout << "Nhap so nguyen n: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai! Vui long nhap lai!\n";
	} while (n <= 0);
		for (int i = 1; i <= 10; i++)
		{
			cout << n << " x " << setw(2) << i << setw(2) << " = " << n * i << endl;
		}
		system("pause");
		return 0;
}

