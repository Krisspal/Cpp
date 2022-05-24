#include <iostream>
#include <cmath>
#include "GPG.h"

using namespace std;
void XUATTHOIGIAN(GPG T)
{
	cout << T.getgio() << ":" << T.getphut() << ":" <<T.getgiay() << endl;
}

int main()
{
	GPG T1, T2, KC;
	int s1, m1, h1,
		s2, m2, h2,
		khoangcach;
	
	cout << "Nhap thoi diem thu nhat (gio:phut:giay):\n";
	cin >> h1 >> m1 >> s1;
	cout << "Nhap thoi diem thu hai (gio:phut:giay):\n";
	cin >> h2 >> m2 >> s2;
	T1.setGPG(h1, m1, s1);
	T2.setGPG(h2, m2, s2);
	
	cout << "Thoi diem 1: ";
	XUATTHOIGIAN(T1);
	cout << "Thoi diem 2: ";
	XUATTHOIGIAN(T2);
	
	khoangcach = abs(T1.getgio() * 3600 + T1.getphut() * 60 + T1.getgiay() - (T2.getgio() * 3600 + T2.getphut() * 60 + T2.getgiay())); //Tinh khoang cach theo giay, them tri tuyet doi (abs) de loai truong hop am.
	KC.setGPG(khoangcach / 3600, (khoangcach % 3600) / 60, khoangcach % 60);
	cout << "Khoang cach giua 2 thoi diem la ";
	XUATTHOIGIAN(KC);
	return 0;
}
