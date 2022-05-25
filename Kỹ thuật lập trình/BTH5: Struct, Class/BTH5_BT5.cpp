#include<iostream>
#include<string>
using namespace std;

struct NTN
{
	int Ngay, Thang, Nam;
};
struct Sach
{
	char TenSach[20];
	char TenTacgia[20];
	NTN XB;
}s;
void Nhap(Sach* s,int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin sach thu " << i + 1 << ":\n";
		cout << "Nhap ten sach: \n";
		cin.getline(s[i].TenSach, 20);
		cout << "Nhap ten tac gia: \n";
		cin.getline(s[i].TenTacgia, 20);
		cout << "Nhap ngay xuat ban sach:\n";
		cout << "Ngay: ";
		cin >> s[i].XB.Ngay;
		cout << "Thang: ";
		cin >> s[i].XB.Thang;
		cout << "Nam: ";
		cin >> s[i].XB.Nam;
	}
}
void Xuat(Sach* s, int n)
{
	char tacgia[10] = "Tran Dung";
	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].TenTacgia, tacgia) == 0)
		{
			cout << "Thong tin sach cua tac gia Tran Dung:\n";
			cout << "Ten sach\n";
			cout << s[i].TenSach << endl;;
			cout << "Ten tac gia\n";
			cout << s[i].TenTacgia[i] << endl;;
			cout << "Ngay xuat ban sach:\n";
			cout << "Ngay: " << s[i].XB.Ngay;
			cout << "Thang: " << s[i].XB.Thang;
			cout << "Nam: " << s[i].XB.Nam;
		}
	}
}
int main()
{
	Sach* s;
	int n;
	do
	{
		cout << "Nhap so luong sach\n";
		cin >> n;
		if (n <= 0 || n > 50)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n <= 0 || n > 50);
	s = new Sach[n];
	Nhap(s, n);
	Xuat(s, n);
	delete[]s;
	s = 0;
	return 0;
}
