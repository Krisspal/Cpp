#include <iostream>
#include <iomanip>

#define MAX 100
int a[MAX];
int n;
using namespace std;

void swap(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

void Nhapds(int a[], int &n)
{
	cout << "Nhap so phan tu muon nhap\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		/*cout << "Nhap phan tu thu: " << i + 1 << ": ";
		cin >> a[i];*/
		a[i] = rand() % 100;
	}
}

void Xuatds(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
		if (i % 10 == 9)
		{
			cout << endl;
		}
	}
	cout << endl;
}

void InsertionSort(int a[], int n)
{
	int x, i, j;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		j = i - 1;
		while (0 <= j && x < a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}

void SelectionSort(int a[], int n)
{
	int pos_min, j;
	for (int i = 0; i < n; i++)
	{
		pos_min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[pos_min])
			{
				pos_min = j;
			}
		}
		swap(a[pos_min], a[i]);
	}
}

void InterchangeSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				swap(a[i], a[j]);
			}
		}
	}
}

void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

void menu()
{
	cout << "1. Nhap danh sach\n"
		<< "2. Xuat danh sach\n"
		<< "3. InsertionSort\n"
		<< "4. SelectionSort\n"
		<< "5. InterchangeSort\n"
		<< "6. BubbleSort\n"
		<< "7. Thoat\n";
}

int main()
{
	int chon;
	do
	{
		menu();
		cout << "Nhap chuc nang muon thuc hien\n";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			Nhapds(a, n);
			break;
		}
		case 2:
		{
			Xuatds(a, n);
			break;
		}
		case 3:
		{
			InsertionSort(a, n);
			cout << "Sap xep thanh cong\n";
			break;
		}
		case 4:
		{
			SelectionSort(a, n);
			cout << "Sap xep thanh cong\n";
			break;
		}
		case 5:
		{
			InterchangeSort(a, n);
			cout << "Sap xep thanh cong\n";
			break;
		}
		case 6:
		{
			BubbleSort(a, n);
			cout << "Sap xe thanh cong\n";
			break;
		}
		}
	} while (chon != 7);
	return 0;
}
