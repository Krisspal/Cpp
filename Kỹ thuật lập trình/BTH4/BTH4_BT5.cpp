#include <iostream>
#include<cstdlib>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
	string a = "";
	string b = "SinhVienCQ";
	char c;
	int dem = 0;
	do
	{
		cout << "NHAP MAT KHAU (CON " << 3 - dem << " LAN)\n";
		for (int i = 0; i < 1000; i++)
		{
			c = _getch();
			if (c == '\r')
				break;
			cout << "X ";
			a += c;
		}
		cout << endl;
		dem++;
		if (a == b)
			cout << "DANG NHAP THANH CONG!\n";
		else
		{
			if (dem < 3)
				cout << "NHAP SAI! NHAP LAI!\n";
			else
				cout << "NHAP SAI! QUA SO LAN CHO PHEP!\n";
		}
		a = "";
	} while (dem < 3 && a != b);
	return 0;
}