#include <cmath>
#include <iostream>
using namespace std; 
class PhanSo
{
private:	
	int ts, ms;
public:
	int getts();
	int getms();
	void setts(int a);
	void setms(int b);
	void Xuat();
	PhanSo Tong(PhanSo PS1, PhanSo PS2);
	PhanSo Hieu(PhanSo PS1, PhanSo PS2);
	PhanSo Tich(PhanSo PS1, PhanSo PS2);
	PhanSo Thuong(PhanSo PS1, PhanSo PS2);
	int UCLN(int a, int b);
	PhanSo ToiGian(PhanSo PS);
};
int PhanSo::getts()
{
	return ts;
};
int PhanSo::getms()
{
	return ms;
};
void PhanSo::setts(int a)
{
	ts = a;
};
void PhanSo::setms(int b)
{
	ms = b;
};
void PhanSo::Xuat()
{
	cout << ts << "/" << ms;
};
int PhanSo::UCLN(int a, int b)
{
	a = abs(a); b = abs(b);
	while (a != b)
	{
		if (b > a)
			b = b - a;
		else
			a = a - b;
	}
	return a;
};
PhanSo PhanSo::ToiGian(PhanSo PS)
{
	PhanSo kq;
	kq.setts(PS.ts / UCLN(PS.ts, PS.ms));
	kq.setms(PS.ms / UCLN(PS.ts, PS.ms));
	return kq;
};
PhanSo PhanSo::Tong(PhanSo PS1, PhanSo PS2)
{
	PhanSo kq;
	kq.setts(PS1.ts * PS2.ms + PS2.ts * PS1.ms);
	kq.setms(PS1.ms * PS2.ms);
	kq = ToiGian(kq);
	return kq;
};
PhanSo PhanSo::Hieu(PhanSo PS1, PhanSo PS2)
{
	PhanSo kq;
	kq.setts(PS1.ts * PS2.ms - PS2.ts * PS1.ms);
	kq.setms(PS1.ms * PS2.ms);
	if (kq.ts != 0)
	{
		kq = ToiGian(kq);
	}
	return kq;
};
PhanSo PhanSo::Tich(PhanSo PS1, PhanSo PS2)
{
	PhanSo kq;
	kq.setts(PS1.ts * PS2.ts);
	kq.setms(PS1.ms * PS2.ms);
	kq = ToiGian(kq);
	return kq;
};
PhanSo PhanSo::Thuong(PhanSo PS1, PhanSo PS2)
{
	PhanSo kq;
	kq.setts(PS1.ts * PS2.ms);
	kq.setms(PS1.ms * PS2.ts);
	kq = ToiGian(kq);
	return kq;
};
