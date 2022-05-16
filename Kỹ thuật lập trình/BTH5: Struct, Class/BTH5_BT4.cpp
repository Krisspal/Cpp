#include <iostream>
#include <string>

using namespace std;

struct SinhVien
{
	string mssv, hoten, diachi;
	int namsinh;
	double toan, van, nn, dtb;
}sv;

void NHAP(SinhVien *sv, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin sinh vien thu " << i + 1 <<":\n";
		cout << "Nhap ho ten:\n";
		getline(cin, sv[i].hoten);
		cout << "Nhap MSSV:\n";
		getline(cin, sv[i].mssv);
		cout << "Nhap dia chi:\n";
		getline(cin, sv[i].diachi);
		cout << "Nhap nam sinh:\n";
		cin >> sv[i].namsinh;
		cout << "Diem toan, van, ngoai ngu:\n";
		cout << "Toan: "; cin >> sv[i].toan;
		cout << "Van: "; cin >> sv[i].van;
		cout << "Ngoai ngu: "; cin >> sv[i].nn;
		sv[i].dtb = ((sv[i].toan + sv[i].van) * 2 + sv[i].nn) / 5;
	}
}

void XUAT(SinhVien* sv, int n)
{
	cout << "Thong tin sinh vien thu " << n + 1 << ":\n";
	cout << "Ho ten : \n";
	cout << "MSSV: " << sv[n].mssv << endl;
	cout << "Nam sinh:" << sv[n].namsinh << endl;
	cout << "Dia chi: " << sv[n].diachi << endl;
	cout << "Diem toan, van, ngoai ngu:\n";
	cout << "Toan: " << sv[n].toan << endl;
	cout << "Van: " << sv[n].van << endl;
	cout << "Ngoai ngu: " << sv[n].nn << endl;
}

int main()
{
	SinhVien* sv;
	int n, stt;
	do
	{
		cout << "Nhap so sinh vien:\n";
		cin >> n;
		if (n <= 0 || n > 45)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n <= 0 || n > 45);
	sv = new SinhVien[n];
	NHAP(sv, n);
	cout << "Nhap STT sinh vien muon xuat thong tin:\n";
	cin >> stt;
	stt = stt - 1;
	XUAT(sv, stt);
	if (sv[stt].dtb >= 8)
		cout << "Xep loai gioi\n";
	else
		if (sv[stt].dtb > 6.5)
			cout << "Xep loai kha\n";
		else
			if (sv[stt].dtb > 5)
				cout << "Xep loai TB\n";
			else
				cout << "Duoi TB\n";
	delete[]sv;
	sv = 0;
	return 0;
}