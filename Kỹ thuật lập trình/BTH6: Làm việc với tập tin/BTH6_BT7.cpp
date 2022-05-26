#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	double luong;
	ofstream Xuat;
	string filelocation = "D:/BT7.txt";
	cout << "Nhap he so luong cua nhan vien\n";
	cout << "Ket thuc nhap bang cach nhap -1\n";
	Xuat.open(filelocation, ios::out);
	if (Xuat.is_open())
	{
		cout << "Mo file thanh cong\n";
		do
		{
			cout << "Nhap he so luong: ";
			cin >> luong;
			Xuat << luong << " ";
		}while (luong != -1);
		cout << "Ghi file thanh cong!\n";
		Xuat.close();
	}
	else
	{
		cout << "Mo file that bai!\n";
	}
	return 0;
}
