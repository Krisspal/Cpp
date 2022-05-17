#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

struct Ngay
{
	int ngay, thang, nam;
};

struct SINHVIEN
{
	int MaSV;
	string HoSV, TenSV;
	Ngay Ngaysinh;
	double DQT, DCK;
};
 
void NHAPTHONGTINSV(SINHVIEN* SV, int soSV, string filelocation)
{
	ofstream outFile;
	outFile.open(filelocation);
	if (outFile.is_open())
	{
		cin.ignore();
		for (int i = 0; i < soSV; i++)
		{
			cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
			cout << "Nhap ma sinh vien: "; 
			cin >> SV[i].MaSV;
			cin.ignore();
			cout << "Nhap ho ten:\n";
			cout << "Ho:\n"; 
			getline(cin, SV[i].HoSV);
			cout << "Ten:\n";
			getline(cin, SV[i].TenSV);
			cout << "Nhap ngay thang nam sinh:\n";
			cout << "Ngay: "; cin >> SV[i].Ngaysinh.ngay;
			cout << "Thang: "; cin >> SV[i].Ngaysinh.thang;
			cout << "Nam: "; cin >> SV[i].Ngaysinh.nam;
			cout << "Nhap diem qua trinh va diem cuoi ky:\n";
			cout << "Diem qua trinh: "; cin >> SV[i].DQT;
			cout << "Diem cuoi ky: "; cin >> SV[i].DCK;
			
			outFile << "Sinh vien " << i + 1 << endl;
			outFile << SV[i].MaSV << endl;
			outFile << SV[i].HoSV << endl;
			outFile << SV[i].TenSV << endl;
			outFile << "Ngay sinh:\n";
			outFile << SV[i].Ngaysinh.ngay <<"/" << SV[i].Ngaysinh.thang << "/" << SV[i].Ngaysinh.nam << endl;
			outFile << SV[i].DQT << endl;
			outFile << SV[i].DCK;
		}
		cout << "Ghi file thanh cong!\n";
	}
	else
		cout << "Khong mo duoc file\n";

}
void XUATTHONGTINSV(SINHVIEN* SV, int soSV, string filelocation)
{
	int MSV, ngay, thang, nam, dqt, dck, inMa;
	string ho, ten;
	ifstream inFile;

	inFile.open(filelocation);
	cout << "Nhap ma so cua sinh vien can tim\n";
	cin >> MSV;
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			inFile.ignore(256, '\n');
			inFile >> inMa;
			inFile.ignore(1);
			getline(inFile, ho);
			getline(inFile, ten);
			inFile.ignore(1);
			inFile.ignore(256, '\n');
			inFile >> ngay;
			inFile.ignore(1);
			inFile >> thang;
			inFile.ignore(1);
			inFile >> nam;
			inFile.ignore(1);
			inFile >> dqt;
			inFile.ignore(1);
			inFile >> dck;
			if (MSV == inMa)
			{
				cout << "Tim thay thong tin sinh vien\n";
				cout << MSV << " | " << ho << " " << ten << " | " << ngay << "/" << thang << "/" << nam << " | " << dqt << " | " << dck << endl;
				break;
			}
			if (MSV != MSV)
			{
				cout << "Khong tim thay thog tin sinh vien\n";
				break;
			}
		}
	}
}
int main()
{
	SINHVIEN* SV;
	int soSV;
	string filelocation = "D:/Cau 3.txt";
	
	do
	{
		cout << "Nhap so luong sinh vien:\n";
		cin >> soSV;
		if (soSV < 1 || soSV > 50)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (soSV < 1 || soSV > 50);

	SV = new SINHVIEN[soSV];
	NHAPTHONGTINSV(SV, soSV, filelocation);
	XUATTHONGTINSV(SV, soSV, filelocation);
	delete[]SV;
	SV = 0;
	return 0;
}

