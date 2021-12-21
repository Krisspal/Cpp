#include <iostream>

using namespace std;

int main()
{
	int c;
	do
	{
		cout << "Nhap chieu dai canh hinh vuong:\n";
		cin >> c;
		if (c <= 0)
			cout << "Nhap sai! Vui long nhap lai!\n";
	} while (c <= 0);
	cout << "a) Hinh vuong dac\n";
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
			cout << " *";
			cout << endl;
	}
	cout << "\nb) Hinh vuong rong\n";
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (j == 1 || j == c || i == 1 || i == c)
			{
				cout << "*";
			}

			else
				cout << " ";
			}
			cout <<endl;
		}
	cout <<endl;
	system("pause");
	return 0;
}
