#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

struct nhanvien
{
	char ma[4];
	char hoten[40];
	int luong = 0;
};

nhanvien dsnv[MAX];
int n;

void Nhapds(nhanvien nv[], int &n)
{
	cout << "Nhap so nhan vien can nhap thong tin: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore(1);
		cout << "Nhap thong tin nhan vien " << i + 1 << ":\n";
		cout << "Nhap ma NV: ";
		cin.getline(nv[i].ma, 4);
		cout << "Nhap ho ten nhan vien: ";
		cin.getline(nv[i].hoten, 40);
		cout << "Nhap luong: ";
		cin >> nv[i].luong;
	}
}

void Xuatds(nhanvien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << nv[i].ma << setw(15) << nv[i].hoten << setw(15) << nv[i].luong << endl;
	}
}

void SelectionSortLuong(nhanvien nv[], int n)
{
	int min_pos, i, j;
	for (i = 0; i < n; i++)
	{
		min_pos = i;
		for (j = 0; j < n; j++)
		{
			if (nv[j].luong < nv[min_pos].luong)
			{
				min_pos = j;
			}
		}
		swap(nv[min_pos], nv[i]);
	}
}

void InsertionSortLuong(nhanvien nv[], int n)
{
	int x, i, j;
	for (i = 0; i < n; i++)
	{
		x = nv[i].luong;
		j = i - 1;
		while (0 <= j && x < nv[j].luong)
		{
			swap(nv[j + 1],nv[j]);
			j--;
		}
		nv[j + 1].luong = x;
	}
}

void menu()
{
	cout << "1. SelectionSort\n"
		<< "2. InsertionSort\n";
	return;
}

int main()
{
	int chon;
	Nhapds(dsnv, n);
	Xuatds(dsnv, n);
	do
	{
		menu();
		cout << "Nhap chuc nang muon thuc hien: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			SelectionSortLuong(dsnv, n);
			break;
		}
		case 2:
		{
			InsertionSortLuong(dsnv, n);
			break;
		}
		default:
		{
			cout << "Nhap so 1 hoac 2\n";
			break;
		}
		}
		break;
	} while (true);
	Xuatds(dsnv, n);
	return 0;
}