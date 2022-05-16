//Not Complete
#include <iostream>
#include <string>

using namespace std;
const int SIZE = 20;

struct NTN
{
	int ngay, thang, nam;
};
struct Sach
{
	char TENSACH[SIZE];
	char TENTG[SIZE];
	NTN ngayxuatban;
};
void NHAP(Sach* s, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin sach thu " << i + 1 << ":\n";
		cout << "Nhap ten sach\n";
		for (int j = 0; j < SIZE; j++)
		{
			cin >> s[i].TENSACH[i];
		}
		cout << "Nhap ten tac gia\n";
		for (int j = 0; j < SIZE; j++)
		{
			cin >> s[i].TENTG[i];
		}
		cout << "Nhap ngay xuat ban sach:\n";
		cout << "Ngay: "; cin >> s[i].ngayxuatban.ngay;
		cout << "Thang: "; cin >> s[i].ngayxuatban.thang;
		cout << "Nam: "; cin >> s[i].ngayxuatban.nam;
	}
}

void XUAT(Sach* s, int n)
{
	char tacgia[10] = "Tran Dung";
	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].TENTG, tacgia) == 0)
		{
			cout << "Thong tin sach cua tac gia Tran Dung:\n";
			cout << "Ten sach\n";
			for (int j = 0; j < SIZE; j++)
			{
				cin >> s[i].TENSACH[i];
			}
			cout << "Ten tac gia\n";
			for (int j = 0; j < SIZE; j++)
			{
				cin >> s[i].TENTG[i];
			}
			cout << "Ngay xuat ban sach:\n";
			cout << "Ngay: " << s[i].ngayxuatban.ngay;
			cout << "Thang: " << s[i].ngayxuatban.thang;
			cout << "Nam: " << s[i].ngayxuatban.nam;
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
	NHAP(s, n);
	XUAT(s, n);
	delete[]s;
	s = 0;
	return 0;
}