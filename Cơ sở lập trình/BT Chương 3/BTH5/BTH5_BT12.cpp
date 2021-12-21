#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int h;
	do
	{
		cout << "Nhap chieu cao h:\n";
		cin >> h;
		if (h <= 0)
			cout << "Nhap sai! Vui long nhap lai!\n";
	} while (h <= 0);

	//Tam giac rong
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || i == j || i == h || j == h )
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	cout <<endl;
	
	//Tam giac ben phai
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout <<endl;
	
	//Tam giac nguoc ben trai
	for (int i = h; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout <<endl;
	
	//Tam giac nguoc ben phai
	for (int i = h; i > 0 ;i--)
	{
		for (int j = 1; j <= h - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout <<endl;
	
	//Kim tu thap
	for (int i = 0; i < h; i++)
	{
		for (int j = 1; j <= h - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
	cout <<endl;
	
	system("pause");
	return 0;
}
