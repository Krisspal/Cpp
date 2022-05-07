#include <iostream>
#include <string>

using namespace std;

struct NhanVien
{
	string manv;
	string hoten;
	int namvaolam, namsinh;
};

void NHAP(NhanVien& nv)
{
	cout << "Nhap ma nhan vien: ";
	getline(cin, nv.manv);
	cout << "Nhap ho ten: ";
	getline(cin, nv.hoten);
	cout << "Nhap nam vao lam: ";
	cin >> nv.namvaolam;
	cout << "Nhap nam sinh: ";
	cin >> nv.namsinh;
}

void XUAT(const NhanVien nv)
{
	cout << "Ma nhan vien: " << nv.manv << endl;
	cout << "Ho ten: " << nv.hoten << endl;
	cout << "Nam vao lam: " << nv.namvaolam << endl;
	cout << "Nam sinh: " << nv.namsinh << endl;
}
void TUOIVATHAMNIEN(NhanVien& nv)
{
	int tuoi = 2022 - nv.namsinh;
	int thamnien = 2022 - nv.namvaolam;
	cout << "Tuoi cua nhan vien: " << tuoi << endl;
	cout << "Tham nien cua nhan vien: " << thamnien <<" nam" << endl;
}
int main()
{
	NhanVien nv;
	NHAP(nv);
	XUAT(nv);
	TUOIVATHAMNIEN(nv);
	return 0;
}