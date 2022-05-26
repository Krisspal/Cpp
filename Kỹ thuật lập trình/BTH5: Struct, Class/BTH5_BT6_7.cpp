#include <iostream>
#include <string>
using namespace std;
struct SanPham
{
	char MASP[10];
	string tenSP;
	double donGia = 0;
	int soluongTonKho = 0;
};

void NHAPTHONGTINSP(SanPham* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore(1);

		cout << "\n\n\t NHAP THONG TIN SAN PHAM " << i + 1 << endl;
		cout << "Nhap vao ma san pham : ";
		cin.getline(p[i].MASP, 10);
		cout << "Nhap ten san pham : ";
		getline(cin, p[i].tenSP);
		cout << "Nhap don gia : ";
		cin >> (p + i)->donGia;
		cout << "So luong ton tai kho : ";
		cin >> (p + i)->soluongTonKho;
	}
	cout << endl;
}

void XUATTHONGTINSP(SanPham* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n\t XUAT THONG TIN SAN PHAM " << i + 1 << endl;
		cout << "Ma san pham : " << (p + i)->MASP << endl;
		cout << "Ten san pham : " << (p + i)->tenSP << endl;
		cout << "Don gia : " << (p + i)->donGia << endl;
		cout << "So luong ton tai cua kho : " << (p + i)->soluongTonKho << endl;
	}
	cout << endl;
}

void SUATHONGTIN(SanPham* p, int n)
{
	int vitri;
	do
	{
		cout << "Nhap vi tri can chinh sua thong tin: ";
		cin >> vitri;
		if (vitri < 0 || vitri > n)
			cout << "Nhap sai! Nhap lai!\n";
	} while (vitri < 0 || vitri > n);
	
	vitri--;
	cin.ignore(1);

	cout << "\n\n\t NHAP THONG TIN SAN PHAM " << vitri + 1 << endl;
	cout << "Nhap vao ma san pham : ";
	cin.getline((p + vitri)->MASP, 10);
	cout << "Nhap ten san pham : ";
	getline(cin, (p + vitri)->tenSP);
	cout << "Nhap don gia : ";
	cin >> (p + vitri)->donGia;
	cout << "So luong ton tai kho : ";
	cin >> (p + vitri)->soluongTonKho;
	cout << endl;

}

void XOASANPHAM(SanPham* p, int& soSP)
{
	int xoa;
	do
	{
		cout << "Nhap vi tri can xoa : ";
		cin >> xoa;
		if (xoa < 0 || xoa > soSP)
			cout << "Nhap sai! Nhap lai\n";
	} while (xoa < 0 || xoa > soSP);
	
	xoa = xoa - 1;
	for (int i = xoa + 1; i < soSP; i++)
	{
		p[i - 1] = *(p + i);
	}
	soSP--;
}

void HOANVI(SanPham& a, SanPham& b)
{
	SanPham temp = a;
	a = b;
	b = temp;
}

void SAPXEP_TONKHO_TANGDAN(SanPham* p, int n)
{
	cout << "\n\n\t Sau khi sap xep so luong kho tang dan:\n";
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[j].soluongTonKho < p[i].soluongTonKho)
				HOANVI(p[j], p[i]);
		}
	}
}

int main()
{
	int soSP, vitri;
	int xoa;
	do
	{
		cout << "Nhap so san pham can nhap: ";
		cin >> soSP;

		if (soSP <= 0 || soSP > 30)
			cout << "Nhap sai, vui long nhap lai:\n";
	} while (soSP <= 0 || soSP > 30);
	SanPham* p;
	p = new SanPham[soSP];
	
	NHAPTHONGTINSP(p, soSP);
	XUATTHONGTINSP(p, soSP);
	
	SUATHONGTIN(p,soSP);
	XUATTHONGTINSP(p, soSP);
	
	XOASANPHAM(p, soSP);
	XUATTHONGTINSP(p, soSP);
	
	SAPXEP_TONKHO_TANGDAN(p, soSP);
	XUATTHONGTINSP(p, soSP);
	
	delete[]p;
	p = NULL;
	
	return 0;
}
