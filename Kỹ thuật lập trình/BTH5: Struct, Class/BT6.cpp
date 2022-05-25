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
void nhap(SanPham* p, int n)
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
void xuat(SanPham* p, int n)
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
void suaThongTin(SanPham* p, int vitri)
{
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

void xoaSanPham(SanPham* p, int& n, int xoa)
{
	xoa = xoa - 1;
	for (int i = xoa + 1; i < n; i++)
	{
		p[i-1] = *(p + i);
	}
	n--;

}
void sapxep(SanPham& a, SanPham& b)
{
	SanPham  temp = a;
	a = b;
	b = temp;
}
void sapxepTangDan(SanPham* p, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[j].soluongTonKho < p[i].soluongTonKho)
				sapxep(p[j], p[i]);
		}
	}
}
int main()
{
	int n, vitri;
	int xoa;
	do
	{
		cout << "Nhap so phan tu : ";
		cin >> n;

		if (n <= 0 || n > 30)
			cout << "Nhap sai, vui long nhap lai : ";
	} while (n <= 0 || n > 30);
	SanPham* p;
	p = new SanPham[n];
	nhap(p, n);
	xuat(p, n);
	cout << "Nhap vi tri can thay doi : ";
	cin >> vitri;
	if (vitri > 0 || vitri <= n)
		suaThongTin(p, vitri);
	else
		cout << "Nhap sai ";
	xuat(p, n);
	cout << "Nhap vi tri can xoa : ";
	cin >> xoa;
	if (xoa > 0 || xoa <= n)
		xoaSanPham(p, n, xoa);
	else
		cout << "Nhap sai ";
	xuat(p, n);
	cout << "\n\n\t Sau khi sap xep so luong kho tang dan : ";
	sapxepTangDan(p, n);
	xuat(p, n);
	delete[]p;
	p = NULL;
	system("pause");
	return 0;
}
