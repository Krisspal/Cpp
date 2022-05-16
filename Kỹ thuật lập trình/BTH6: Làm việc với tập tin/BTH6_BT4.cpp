#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char* p;
	int n;
	ofstream Nhap;
	ifstream Xuat;
	do
	{
		cout << "Nhap so ky tu\n";
		cin >> n;
		if (n <= 0 || n > 20)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n <= 0 || n > 20);
	p = new char[n];
	for (int i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}
	Nhap.open("D:/BT4.txt", ios::out);
	if (Nhap.is_open())
	{ 
		for (int i = 0; i < n; i++)
		{
			if ( *(p + i) >= 'a' || *(p + i) <= 'z')
				Nhap << char(* (p + i) - 32) << endl;
		}
		Nhap.close();
		cout << "Ghi file thanh cong\n";
	}
	else
	{
		cout << "Khong mo duoc file\n";
	}
	delete[]p;
	p = 0;
	return 0;
}