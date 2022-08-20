#include <iostream>
#include <iomanip>

#define MAX 100
int a[MAX], bin[MAX];
int sp; //dinh stack

using namespace std;

void init(int &sp)
{
	sp = -1;
}

int isEmpty(int sp)
{
	if (sp == -1)
		return 1;
	return 0;
}

int isFull(int sp)
{
	if (sp == MAX - 1)
		return 1;
	return 0;
}

int Push(int a[], int& sp, int x)
{
	if (sp < MAX - 1)
	{
		a[++sp] = x;
		return 1;
	}
	return 0;
}

void input_list()
{
	if (isFull(sp) != 1)
	{
		int n, x;
		cout << "Nhap so phan tu can nhap\n";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap phan tu thu " << i + 1 << ": ";
			cin >> x;
			Push(a, sp, x);
		}
		cout << "Nhap thanh cong\n";
	}
	else
	{
		cout << "Nhap that bai\n";
	}
}

void output_list(int a[], int sp)
{
	int i = sp;
	while (i >= 0)
	{
		cout << a[i] << "\t";
		i--;
	}
	cout << endl;
}

void De_to_Bi(int bin[], int& sp, int x)
{
	int binary;
	while (x > 0)
	{
		binary = x % 2;
		Push(bin, sp, binary);
		x = x / 2;
	}
	output_list(bin, sp);
}

int Pop(int a[], int& sp)
{
	if (isEmpty(sp) == 0)
	{
		int x = a[sp--];
		cout << "Phan tu da xoa la " << x << endl;
		return 1;
	}
	return 0;
}

void menu()
{
	cout << "1. Nhap danh sach\n"
		<< "2. Xuat danh sach\n"
		<< "3. Them phan tu vao danh sach\n"
		<< "4. Xoa phan tu khoi danh sach\n"
		<< "5. Chuyen so tu he 10 sang he 2\n"
		<< "6. Thoat\n";
}
int main()
{
	init(sp);
	int chon, x1, x2;
	do
	{
		menu();
		cout << "Nhap chuc nang muon thuc hien\n";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			input_list();
			break;
		}
		case 2:
		{
			output_list(a, sp);
			break;
		}
		case 3:
		{
			cout << "Nhap phan tu muon them:\n";
			cin >> x1;
			Push(a, sp, x1);
			break;
		}
		case 4:
		{
			Pop(a, sp);
			break;
		}
		case 5:
		{
			cout << "Nhap so muon doi\n";
			cin >> x2;
			De_to_Bi(bin, sp, x2);
			break;
		}
		}
	} while (chon != 6);
	return 0;
}
