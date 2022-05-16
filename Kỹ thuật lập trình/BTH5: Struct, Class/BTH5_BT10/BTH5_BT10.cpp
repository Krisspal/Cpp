#include <iostream>
using namespace std;
#include "GPG.h"
int main()
{
	GPG T1, T2, kqKC;
	int a1, b1, c1, a2, b2, c2, K=0;
	cout << "Nhap thoi diem thu nhat: ";
	cin >> a1 >> b1 >> c1;
	cout << "Nhap thoi diem thu hai: ";
	cin >> a2 >> b2 >> c2;
	T1.setGPG(a1, b1, c1);
	T2.setGPG(a2, b2, c2);
	K=abs(T1.getgio()*3600+T1.getphut()*60+T1.getgiay()-(T2.getgio()*3600+T2.getphut()*60+T2.getgiay()));
	kqKC.setGPG(K/3600, (K%3600)/60, K%60);
	cout << "Khoang cach giua hai thoi diem la: " << kqKC.getgio() << " gio " << kqKC.getphut() << " phut " << kqKC.getgiay() << " giay \n";
	system("pause");
	return 0;
}