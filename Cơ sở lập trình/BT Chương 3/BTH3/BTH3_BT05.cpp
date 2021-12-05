#include <iostream>

using namespace std;

int main()
{
	double diem;
	cout << "Nhap diem tich luy: ";
	cin >> diem;
	if (diem < 0 || diem > 10)
		cout << "Nhap diem sai!";
	else
		if (diem >= 9)
			cout << "Xep loai xuat sac";
		else
			if (diem >= 8)
				cout << "Xep loai gioi";
			else
				if (diem >= 7)
					cout << "Xep loai kha";
				else
					if (diem >= 6)
						cout << "Xep loai trung binh kha";
					else
						if (diem >= 5)
							cout << "Xep loai trung binh";
						else
							cout << "Yeu";
	cout << endl;
	system("pause");
	return 0;
}