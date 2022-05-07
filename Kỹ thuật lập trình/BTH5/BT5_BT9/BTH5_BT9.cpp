#include<iostream>
#include "PhanSo_BT9.h"
using namespace std;

int main()
{
	PhanSo PS1, PS2, kqTong, kqHieu, kqTich, kqThuong;
	int ts1, ms1,ts2,ms2;
	cout << "Nhap phan so thu nhat: ";
	cin >> ts1 >> ms1;
	cout << "Nhap phan so thu hai: ";
	cin >> ts2>> ms2;
	PS1.setts(ts1);
	PS1.setms(ms1);
	PS2.setts(ts2);
	PS2.setms(ms2);
	kqTong = kqTong.Tong(PS1, PS2);
	kqHieu = kqHieu.Hieu(PS1, PS2);
	kqTich = kqTich.Tich(PS1, PS2);
	kqThuong = kqThuong.Thuong(PS1, PS2);
	cout << "\nTong 2 phan so: ";
	PS1.Xuat(); cout << "+"; PS2.Xuat(); cout << "="; kqTong.Xuat(); cout << endl;
	cout << "Hieu 2 phan so: ";
	PS1.Xuat(); cout << "-"; PS2.Xuat(); cout << "="; kqHieu.Xuat(); cout << endl;
	cout << "Tich 2 phan so: ";
	PS1.Xuat(); cout << "*"; PS2.Xuat(); cout << "="; kqTich.Xuat(); cout << endl;
	cout << "Thuong 2 phan so: ";
	PS1.Xuat(); cout << "/"; PS2.Xuat(); cout << "="; kqThuong.Xuat(); cout << endl;
	return 0;
}