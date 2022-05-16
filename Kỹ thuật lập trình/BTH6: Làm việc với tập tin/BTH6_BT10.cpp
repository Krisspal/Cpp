#include <iostream>
#include<fstream>
#include<string>
using namespace std;
struct SinhVien
{
	string MaSV, HoTen;
	int namSinh;
};
int main()
{
	SinhVien* SV;
	int n, InNamSinh;
	string MSV, inMa, inHoTen;
	ofstream outFile;
	ifstream inFile;

	do
	{
		cout << "Nhap so luong hoc sinh" << endl;
		cin >> n;
		if (n < 1 || n > 10)
			cout << "Nhap sai, vui long nhap lai" << endl;
	} while (n < 1 || n > 10);
	SV = new SinhVien[n];

	outFile.open("D:\BT10.txt");
	if (outFile.is_open())
	{
		cin.ignore();
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap sinh vien thu " << i + 1 << endl;
			cout << "Nhap ma so\n";
			getline(cin, SV[i].MaSV);
			cout << "Nhap ho ten\n";
			getline(cin, SV[i].HoTen);
			cout << "Nam sinh\n";
			cin >> SV[i].namSinh;
			cin.ignore();
			outFile << SV[i].MaSV << endl;
			outFile << SV[i].HoTen << endl;
			outFile << SV[i].namSinh << endl;
		}
		outFile.close();
		cout << "Nhap danh sach sinh vien thanh cong" << endl;
	}
	else
		cout << "Nhap danh sach sinh vien khong thanh cong" << endl;
	cout << "Nhap vao ma sinh vien can tim\n";
	getline(cin, MSV);
	inFile.open("D:\BT10.txt");
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			inFile >> inMa;
			inFile.ignore(1);
			getline(inFile, inHoTen);
			inFile.ignore(1);
			inFile >> InNamSinh;
			if (inMa == MSV)
			{
				cout << "\nTim thay ma sinh vien " << inMa << endl;
				cout << "\nHo ten " << inHoTen << endl;
				cout << "\nNam sinh " << InNamSinh << endl;
				break;
			}
			if (inMa != MSV)
			{
				cout << "Khong tim thay thong tin sinh vien\n";
				break;
			}
		}
	}
	else
		cout << "\nDoc file khong thanh cong " << endl;
	delete[]SV;
	SV = NULL;
	system("pause");
	return 0;
}
