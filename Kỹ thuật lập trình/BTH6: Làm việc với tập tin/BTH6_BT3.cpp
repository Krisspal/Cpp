#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c, a1, b1, c1, tbc;
	ofstream Nhapso;
	ifstream Xuatso;
	cout << "Nhap 3 so nguyen a,b,c\n";
	cin >> a >> b >> c;
	Nhapso.open("D:/BT3.txt", ios::out);
	if (Nhapso.is_open())
	{
		Nhapso << a << "#" << b << "#" << c << endl;
		Nhapso.close();
		cout << "Ghi file thanh cong\n";
	}
	else
		cout << "Ghi file khong thanh cong\n";

	Xuatso.open("D:/BT3.txt", ios::in);
	if (Xuatso.is_open())
	{
		Xuatso >> a1;
		Xuatso.ignore();
		Xuatso >> b1;
		Xuatso.ignore();
		Xuatso >> c1;
		cout << "Nhap file thanh cong\n";
	}
	else
		cout << "Nhap file khong thanh cong\n";
	cout << "Trung binh cong la " << double(a1 + b1 + c1) / 3 << endl;
	return 0;
}