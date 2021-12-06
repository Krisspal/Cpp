#include <iostream>

using namespace std;

void menu()
{
	cout << "1) Cong\n";
	cout << "2) Tru\n";
	cout << "3) Nhan\n";
	cout << "4) Chia\n";
}

int cong(int a, int b)
{
	return a + b;
}

int tru(int a, int b)
{
	return a - b;
}

double chia(double a, double b)
{
	return double(a / b);
}

int main()
{
	int a, b, chon;
	char TT;
	do
	{
		system("cls");
		menu();
		cout << "Nhap vao hai so nguyen: ";
		cin >> a >> b;
		cout << "Chon tu 1 den 4: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			cout << a << " + " << b << " = " << cong(a, b);
			break;
		case 2:
			cout << a << " - " << b << " = " << tru(a, b);
			break;
		case 3:
			cout << a << " * " << b << " = " << a * b;
			break;
		case 4:
			if (b != 0)
				cout << a << " / " << b << " = " << chia(a, b);
			else
				cout << "Loi chia 0";
			break;
		default:
			cout << "\nNhap chon sai!";
		}
		cout << "\nTiep tuc (C/K): "; 
		cin >> TT;
	} while (TT == 'c' || TT == 'C');

	cout << endl;
	system("pause");
	return 0;
	
}
