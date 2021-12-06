#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, chon;
	do
	{
		system("cls");
		cout << "		Menu chuc nang\n";
		cout << "1.Phep cong\n";
		cout << "2.Phep tru\n";
		cout << "3.Phep nhan\n";
		cout << "4.Phep chia\n";
		cout << "5.Thoat\n";
		do
		{
			cout << "Chon chuc nang (1,2,...): "; 
			cin >> chon;
			if (chon < 1 || chon > 5)
				cout << "Nhap sai! Hay nhap lai\n";
		} while (chon < 1 || chon > 5);
			if (chon >= 1 && chon <= 4)
			{
				cout << "Nhap 2 so nguyen: "; cin >> a; cin >> b;
				switch (chon)
				{
				case 1:
					cout << a << " + " << b << " = " << a + b << endl;
					break;
				case 2:
					cout << a << " - " << b << " = " << a - b << endl;;
					break;
				case 3:
					cout << a << " * " << b << " = " << a * b << endl;;
					break;
				case 4:
					cout << a << " / " << b << " = " << fixed << setprecision(2) << (double)a / b << endl;;
					break;
				}system("pause");
			}
	} while (chon != 5);
	
	system("pause");
	return 0;
}