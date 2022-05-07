#include<iostream>
using namespace std;
struct PhanSo
{
	int TS;
	int MS;
}PS;
int UCLN(int a, int b)
{
	a = abs(a); b = abs(b);
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}
PhanSo ToiGian(PhanSo PS)
{
	PhanSo kq;
	int d = UCLN(PS.TS, PS.MS);
	kq.TS = PS.TS / d;
	kq.MS = PS.MS / d;
	return kq;
}
void NhapPS(PhanSo& PS)
{
	do
	{
		cout << "Nhap lan luot tu so va mau so:\n";
		cin >> PS.TS >> PS.MS;
		if (PS.MS == 0)
			cout << "Mau so phai khac 0! Nhap lai\n";
	} while (PS.MS == 0);
}
void XuatPS(PhanSo PS)
{
	cout << PS.TS << "/" << PS.MS << endl;
}
PhanSo Tong(PhanSo p1, PhanSo p2)
{
	PhanSo kq;
	kq.TS = (p1.TS * p2.MS + p2.TS * p1.MS);
	kq.MS = (p1.MS * p2.MS);
	kq = ToiGian(kq);
	return kq;
}
PhanSo Hieu(PhanSo p1, PhanSo p2)
{
	PhanSo kq;
	kq.TS = (p1.TS * p2.MS - p2.TS * p1.MS);
	kq.MS = (p1.MS * p2.MS);
	kq = ToiGian(kq);
	return kq;
}
PhanSo Thuong(PhanSo p1, PhanSo p2)
{
	PhanSo kq;
	kq.TS = (p1.TS * p2.MS);
	kq.MS = (p1.MS * p2.TS);
	kq = ToiGian(kq);
	return kq;
}
PhanSo Tich(PhanSo p1, PhanSo p2)
{
	PhanSo kq;
	kq.TS = (p1.TS * p2.TS);
	kq.MS = (p1.MS * p2.MS);
	kq = ToiGian(kq);
	return kq;
}
int main()
{
	PhanSo a, b, c;
	cout << "Nhap vao phan so thu nhat:\n";
	NhapPS(a);
	cout << "Nhap vao phan so thu hai:\n";
	NhapPS(b);
	cout << "Tong hai phan so: \n";
	XuatPS(Tong(a,b));
	cout << "Hieu hai phan so: \n";
	c = Hieu(a, b);
	XuatPS(c);
	cout << "Tich hai phan so: \n";
	c = Tich(a, b);
	XuatPS(c);
	cout << "Thuong hai phan so: \n";
	c = Thuong(a, b);
	XuatPS(c);
	system("pause");
	return 0;
}