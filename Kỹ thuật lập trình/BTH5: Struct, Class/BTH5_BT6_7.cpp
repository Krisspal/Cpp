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

void NHAPTHONGTINSP(SanPham* SP, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin san pham " << i + 1 << endl;
		cout << "Nhap ma san pham (toi da 10 ky tu):\n";
		cin.get(SP[i].MSP, 10);
		cout << "Nhap ten san pham:\n";
		getline(cin, SP[i].TENSP);
		cout << "Nhap don gia:\n";
		cin >> SP[i].gia;
		cout << "Nhap so luong ton:\n";
		cin >> SP[i].tonkho;
		cin.ignore();
	}
}

void XUATTHONGTINSP(SanPham* SP, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "San pham thu " << i + 1 << endl;
		cout << "Ma san pham:";
		cout << SP[i].MSP << endl;
		cout << "Ten san pham:";
		cout << SP[i].TENSP << endl;
		cout << "Nhap don gia: ";
		cout << SP[i].gia << endl;
		cout << "So luong ton: ";
		cout << SP[i].tonkho << endl;
	}
}

bool SOSANH_MSP(const char* MSP, const char* MSP_Canxoa)
{
	if (strcmp(MSP, MSP_Canxoa) == 0)
		return true;
	else
		return false;
}

void XOATHONGTINSP(SanPham* SP, int& n)
{
	char MSP_Canxoa[10];
	cout << "Nhap MSP can xoa\n";
	cin.get(MSP_Canxoa, 10);
	for (int i = 0; i < n; i++)
	{
		if (SOSANH_MSP(SP[i].MSP, MSP_Canxoa))
		{
			int j = i;
			for (i = j; i < n; i++)
			{
				SP[i] = SP[i + 1];
			}
			n--;
		}
	}
	cout << "Da xoa thong tin sna pham\n";
}
//void SUATHONGTINSP(SanPham* SP, const int n)
//{
//	char MSP_Cansua[10];
//	cout << "Nhap MSP can sua thong tin\n";
//	cin.get(MSP_Cansua, 10);
//
//}
int main()
{
	SanPham* p;
	int n;
	do
	{
		cout << "Nhap so luong san pham:\n";
		cin >> n;
		if (n <= 0 || n > 30)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n <= 0 || n > 30);
	p = new SanPham[n];
	NHAPTHONGTINSP(p, n);
	XUATTHONGTINSP(p, n);
	XOATHONGTINSP(p, n);
	delete[]p;
	p = 0;
	return 0;
}
