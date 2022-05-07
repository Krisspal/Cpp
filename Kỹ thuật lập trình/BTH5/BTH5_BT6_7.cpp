#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

struct SanPham
{
	char MSP[10];
	string TENSP;
	double gia;
	int tonkho;
};

void NHAP(SanPham*  arrSP, int n)
{
	arrSP = new SanPham[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ma san pham:\n";
		cin.getline(arrSP[i].MSP, 10);
		cout << "Nhap ten san pham:\n";
		getline(cin, arrSP[i].TENSP);
		cout << "Nhap don gia:\n";
		cin >> arrSP[i].gia;
		cout << "Nhap so luong ton:\n";
		cin >> arrSP[i].tonkho;
		cin.ignore();
	}
}

void XUAT(SanPham* p, int n)
{
	cout << "Thong tin san pham thu " << n + 1 << ":\n";
	cout << "Ma san pham: " <<  
	cout << "Nam sinh:" << sv[n].namsinh << endl;
	cout << "Dia chi: " << sv[n].diachi << endl;
	cout << "Diem toan, van, ngoai ngu:\n";
	cout << "Toan: " << sv[n].toan << endl;
	cout << "Van: " << sv[n].van << endl;
	cout << "Ngoai ngu: " << sv[n].nn << endl;
}

int main()
{
	SanPham *p;
	int n;
	/*int* a;*/
	do
	{
		cout << "Nhap so luong san pham:\n";
		cin >> n;
		if (n <= 0 || n > 30)
		{
			cout << "Nhap sai!Nhap lai\n";
		}
	} while (n <= 0 || n > 30);
	p = new SanPham[n];
	NHAP(p, n);
}