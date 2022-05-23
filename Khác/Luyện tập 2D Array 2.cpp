/*Cho ma trận a có tối đa 100 phần tử, mỗi phần tử là một phân số (bao gồm tử số và mẫu số).Viết chương trình thực hiện các yêu cầu sau :
- Nhập và xuất ma trận, mỗi phân số xuất dạng tử / mẫu
- Tối giản tất cả các phân số của ma trận và xuất ma trận
- Tính tổng ma trận, kết quả tối giản.
- Tìm phân số lớn nhất trên ma trận.
- Tính tổng trên từng dòng và xuất kết quả.
- Tìm phân số lớn nhất trên từng dòng và xuất kết quả.*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

#define MAX 100
using namespace std;

struct PhanSo
{
	int tuSo, mauSo;
};

void KHOITAO_PHANSO(PhanSo& ps)
{
	ps.tuSo = 0;
	ps.mauSo = 1;
}
void NHAPPHANSO(PhanSo &ps)
{
	ps.tuSo = 1 + (rand() % 20);
	ps.mauSo = 1 + (rand() % 20);
} 

void XUATPHANSO(PhanSo ps)
{
	cout << setw(9) << ps.tuSo << "/" << ps.mauSo << "\t";
}

double UCLN(int a, int b)
{
	if (b == 0)
		return a;
	else
		return UCLN(b, a % b);
}

void TAOMATRAN(PhanSo a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			NHAPPHANSO(a[i][j]);
		}
	}
}

void XUATMATRAN(PhanSo a[][MAX], const int dong, const int cot)
{
	cout << "Xuat ma tran\n";
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			XUATPHANSO(a[i][j]);
		}
		cout << endl;
	}
}

void TOIGIAN(PhanSo& ps)
{
	int Uoc = UCLN(ps.tuSo, ps.mauSo);
	ps.tuSo = ps.tuSo / Uoc;
	ps.mauSo = ps.mauSo / Uoc;
}

void TOIGIAN_MATRAN(PhanSo a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			TOIGIAN(a[i][j]);
		}
	}
}

PhanSo TONG_2_PHANSO(PhanSo ps1, PhanSo ps2)
{
	PhanSo kq;
	kq.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
	kq.mauSo = ps1.mauSo * ps2.mauSo;
	return kq;
}

PhanSo TONGMATRAN(PhanSo a[][MAX], int dong, int cot)
{
	PhanSo tong;
	KHOITAO_PHANSO(tong);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			tong = TONG_2_PHANSO(tong, a[i][j]);
		}
	}
	TOIGIAN(tong);
	return tong;
}
int SOSANH_PHANSO(PhanSo ps1, PhanSo ps2)
{
	// > 0: ps1 > ps2
	// > 0: ps1 < ps2
	// = 0: ps1 = ps2
	double p1 = ps1.tuSo * 1.0 / ps1.mauSo;
	double p2 = ps2.tuSo * 1.0 / ps2.mauSo;

	if (p1 > p2)
		return 1;
	else if (p1 < p2)
		return -1;
	return 0;
}

PhanSo TIMMAX_MATRAN(PhanSo a[][MAX], int dong, int cot)
{
	PhanSo Max = a[0][0];
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (SOSANH_PHANSO(a[i][j], Max) > 0)
			{
				Max = a[i][j];
			}
		}
	}
	return Max;
}

void TONGDONG(PhanSo a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		PhanSo tong;
		KHOITAO_PHANSO(tong);
		for (int j = 0; j < cot; j++)
		{
			tong = TONG_2_PHANSO(tong, a[i][j]);
		}
		cout << "Tong dong thu " << i + 1 << " la ";
		TOIGIAN(tong);
		XUATPHANSO(tong);
		cout << endl;
	}
}

void TIMAXDONG(PhanSo a[][MAX], const int dong, const int cot)
{
	for (int i = 0; i < dong; i++)
	{
		PhanSo Max = a[i][0];

		for (int j = 1; j < cot; j++)
		{
			if (SOSANH_PHANSO(a[i][j], Max) > 0)
				Max = a[i][j];
		}
		cout << "Phan so lon nhat dong thu " << i + 1 << ": ";
		XUATPHANSO(Max);
		cout << endl;
	}
}

int main()
{
	int dong, cot;
	PhanSo a[MAX][MAX], tong, PhanSoMax;
	srand((unsigned)time(NULL));

	do
	{
		cout << "Nhap so dong va so cot ma tran (toi da 100 phan tu):\n";
		cout << "So dong: "; cin >> dong;
		cout << "So cot: "; cin >> cot;
		if ((dong * cot) > 100)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while ((dong * cot) > 100);

	TAOMATRAN(a, dong, cot);
	XUATMATRAN(a, dong, cot);
	
	cout << "Toi gian ma tran\n";
	TOIGIAN_MATRAN(a, dong, cot);
	XUATMATRAN(a, dong, cot);
	
	tong = TONGMATRAN(a, dong, cot);
	cout << "Tong ma tran la ";
	XUATPHANSO(tong);
	cout << endl;

	cout << "Phan so lon nhat trong ma tran la\n";
	PhanSoMax = TIMMAX_MATRAN(a, dong, cot);
	XUATPHANSO(PhanSoMax);
	cout << endl;

	cout << "Tong tung dong cua ma tran\n";
	TONGDONG(a, dong, cot);

	cout << "Max cua tung dong la:\n";
	TIMAXDONG(a, dong, cot);
	return 0;
}
