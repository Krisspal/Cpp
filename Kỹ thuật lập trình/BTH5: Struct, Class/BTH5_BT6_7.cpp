//Chua xong
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>


using namespace std;

struct SanPham
{
	char MSP[10];
	string TENSP;
	double gia;
	int tonkho;
};

struct DanhsachSP
{
	SanPham* p;
	int n;
};

void NHAPTHONGTIN1SP(SanPham &SP)
{
	cout << "Nhap ma san pham (toi da 10 ky tu):\n";
	cin >> SP.MSP;
	cin.ignore();
	cout << "Nhap ten san pham:\n";
	getline(cin, SP.TENSP);
	cout << "Nhap don gia:\n";
	cin >> SP.gia;
	cout << "Nhap so luong ton:\n";
	cin >> SP.tonkho;
}

void NHAPDANHSACHSP(DanhsachSP& DS)
{
	do
	{
		cout << "Nhap so luong san pham:\n";
		cin >> DS.n;
		if (DS.n <= 0 || DS.n > 30)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (DS.n <= 0 || DS.n > 30);
	
	DS.p = new SanPham[DS.n];
	for (int i = 0; i < DS.n; i++)
	{
		cout << "Nhap san pham thu " << i + 1 << endl;
		NHAPTHONGTIN1SP(DS.p[i]);
	}
}

void XUATTHONGTIN1SP(SanPham SP)
{
	cout << "Ma san pham:";
	cout << SP.MSP << endl;
	cout << "Ten san pham:";
	cout << SP.TENSP << endl;
	cout << "Nhap don gia: ";
	cout << SP.gia << endl;
	cout << "So luong ton: ";
	cout << SP.tonkho << endl;
}

void XUATDANHSACHSP(const DanhsachSP DS)
{
	for (int i = 0; i < DS.n; i++)
	{
		cout << "San pham thu " << i + 1 << endl;
		XUATTHONGTIN1SP(DS.p[i]);
	}
}

bool SOSANH_MSP(const char* MSP, const char* MSP_Canxoa)
{
	if (strcmp(MSP, MSP_Canxoa) == 0)
		return true;
	else
		return false;
}

//void XOATHONGTINSP(DanhsachSP &DS)
//{
//	char MSP_Canxoa[10];
//	cout << "Nhap MSP can xoa:\n";
//	cin >> MSP_Canxoa;
//	for (int i = 0; i < DS.n; i++)
//	{
//		if (SOSANH_MSP(DS.p[i]MSP, MSP_Canxoa))
//		{
//			for (int j = i; j < n; j++)
//			{
//				SP[j] = SP[j + 1];
//			}
//			n--;
//		}
//	}
//	cout << "Da xoa thong tin san pham\n";
//}

int main()
{
	DanhsachSP DS;
	NHAPDANHSACHSP(DS);
	XUATDANHSACHSP(DS);
	delete[]DS.p;
	return 0;
}
