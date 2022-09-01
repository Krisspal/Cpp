#include<iostream>
#include<iomanip>
using namespace std;
#define MAX 100

struct nhanvien
{
	int ma, namsinh;
	char ten[30], email[20];
};

nhanvien dsnv[MAX];
int n;

void nhapThongtinNV(nhanvien nv[], int& n)
{
	cout << "Nhap so nhan vien muon nhap: ";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin nhan vien " << i + 1 << ":\n";
		cout << "Nhap ma nhan vien: ";
		cin >> nv[i].ma;
		cin.ignore();
		cout << "Nhap ho va ten nhan vien: ";
		cin.getline(nv[i].ten, 30);
		cout << "Nhap nam sinh: ";
		cin >> nv[i].namsinh;
		cin.ignore();
		cout << "Nhap email: ";
		cin.getline(nv[i].email, 20);
	}
}

void xuatDSNV(nhanvien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << nv[i].ma << setw(15) << nv[i].ten << setw(15) << nv[i].namsinh << endl;
		cout << "=====================\n";
	}
}

void xuatNVvitrichan(nhanvien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << nv[i].ma << setw(15) << nv[i].ten << setw(15) << nv[i].namsinh << endl;
			cout << "=====================\n";
		}
		else
			continue;
	}
}

void selectionSortNamsinh(nhanvien nv[], int n)
{
	int min_pos, i, j;
	for (i = 0; i < n - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j < n; j++)
			if (nv[j].namsinh < nv[min_pos].namsinh)
				min_pos = j;
		swap(nv[min_pos], nv[i]);
	}
}

void insertionSortNamsinh(nhanvien nv[], int n)
{
	int x, i, j;
	for (i = 0; i < n; i++)
	{
		x = nv[i].namsinh;
		j = i - 1;
		while (0 <= j && x < nv[j].namsinh)
		{
			swap(nv[j + 1], nv[j]);
			j--;
		}
		nv[j + 1].namsinh = x;
	}
}

int insertNV(nhanvien nv[], int& n, int i)
{
	if (i <= n && n < MAX)
	{
		for (int j = n - 1; j >= i; j--)
			nv[j + 1] = nv[j];
		n++;
		cout << "Nhap ma nhan vien: ";
		cin >> nv[i].ma;
		cin.ignore();
		cout << "Nhap ho va ten nhan vien: ";
		cin.getline(nv[i].ten, 30);
		cout << "Nhap nam sinh: ";
		cin >> nv[i].namsinh;
		cin.ignore();
		cout << "Nhap email: ";
		cin.getline(nv[i].email, 20);
		return 1;
	}
	return 0;
}

int main()
{
	int chon, idx;

	do
	{
		cout << "Nhap chon: \n"
			<< "0. Thoat \n"
			<< "1. Nhap thong tin nhan vien \n"
			<< "2. Xuat thong tin nhan vien \n"
			<< "3. Sap xep nam sinh nhan vien bang thuat toan SelectionSort \n"
			<< "4. Sap xep nam sinh nhan vien bang thuat toan InsertionSort \n"
			<< "5. Xuat nhan vien o vi tri chan\n"
			<< "6. Chen them nhan vien vao vi tri chi dinh\n"
			<< "Chon: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			return 1;
			break;
		case 1:
			nhapThongtinNV(dsnv, n);
			break;
		case 2:
			xuatDSNV(dsnv, n);
			break;
		case 3:
			cout << "Luong nhan vien sau khi sap xep theo thuat toan SelectionSort: \n";
			selectionSortNamsinh(dsnv, n);
			xuatDSNV(dsnv, n);
			cout << endl;
			break;
		case 4:
			cout << "Luong nhan vien sau khi sap xep theo thuat toan InsertionSort: \n";
			insertionSortNamsinh(dsnv, n);
			xuatDSNV(dsnv, n);
			cout << endl;
			break;
		case 5: 
			cout << "Nhan vien o nhung vi tri chan la:\n";
			xuatNVvitrichan(dsnv, n);
			break;
		case 6:
			cin >> idx;
			insertNV(dsnv, n, idx);
			xuatDSNV(dsnv, n);
		}
	} while (chon != 0);

	return 0;
}
