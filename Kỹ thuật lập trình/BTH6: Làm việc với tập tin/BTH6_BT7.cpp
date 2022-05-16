#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	double luong;
	ofstream Xuat;
	cout << "Nhap he so luong cua nhan vien\n";
	cout << "Ket thuc nhap bang cach nhap -1\n";
	Xuat.open("D:/BT7.txt",ios::out);
	if (Xuat.is_open())
	{
		cout << "Mo file thanh cong\n";
		for (;;)
		{
			cout << "Nhap he so luong: ";
			cin >> luong;
			if (luong < 0)
			{
				break;
			}
			else
			{
				Xuat << luong << " ";
			}
		}
		cout << "Ghi file thanh cong!\n";
		Xuat.close();
	}
	else
	{
		cout << "Mo file that bai!\n";
	}
	return 0;
}