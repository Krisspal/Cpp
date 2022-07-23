#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

void nhap_n(int& n)
{
	do
	{
		cout << "Nhap so phan tu cua danh sach\n";
		cin >> n;
		if (n < 0 || n > 100)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n < 0 || n > 100);
}
void input(int a[], int n)
{
	for (int i = 0; i < n; i++) 
	{
		/*cout << "Nhap phan tu thu " << i + 1 << endl;
		cin >> a[i];*/
		a[i] = rand() % 100;
	}
}
//Xuat danh sach tren mot hang
void output1(int a[], int n)
{
	cout << "Xuat mang tren mot dong\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}
//Xuat danh sach tren nhieu hang
void output2(int a[], int n)
{
	cout << "Xuat mang tren nhieu dong\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << a[i];
		if (i % 10 == 9)
			cout << endl;
	}
	cout << endl;
}

int search(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int InsertEnd(int a[], int& n, int x)
{
	if (n < MAX)
	{
		n += 1;
		a[n - 1] = x;
		return 1; 
	}
	return 0; 
}

int DeleteEnd(int a[], int& n)
{
	if (n > 0)
	{
		n--;
		return 1;
	}
	return 0;
}

int Delete(int a[], int& n, int i)
{
	if (i >= 0 && i < n)
	{
		for (int j = i; j < (n - 1); j++)
		{
			a[j] = a[i + 1];
			i++;
		}
		n--; 
		return 1;
	}
	return 0;
}

int SearchDelete(int a[], int& n, int x)
{
	int index;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			index = i;
		}
	}
	
	if (index >= 0 && index < n)
	{
		for (int j = index; j < (n - 1); j++)
		{
			a[j] = a[index + 1];
			index++;
		}
		n--;
		return 1;
	}
	return 0;
}

int main()
{
	int a[MAX];
	int n, x1, x2, x3, x4;

	nhap_n(n);
	input(a, n);
	output1(a, n);
	output2(a, n);
	cout << "Nhap gia tri can tim:\n";
	cin >> x1;
	cout << search(a, n, x1);
	cout << endl;
	
	cout << "Nhap gia tri can chen vao cuoi danh sach\n";
	cin >> x2;
	if (InsertEnd(a, n, x2) == 1)
	{
		cout << "Chen thanh cong\n";
		output2(a, n);
	}
	else
		cout << "Chen that bai\n";
	
	cout << "Xoa phan tu cuoi danh sach\n";
	if (DeleteEnd(a, n) == 1)
	{
		cout << "Xoa thanh cong\n";
		output2(a, n);
	}
	else
		cout << "Xoa that bai\n";

	cout << "Nhap vi tri can xoa (0 < " << n - 1 << " )\n";
	cin >> x3;
	if (Delete(a, n, x3) == 1)
	{
		cout << "Xoa thanh cong\n";
		output2(a, n);
	}
	else
		cout << "Xoa that bai\n";

	cout << "Nhap gia tri can xoa\n";
	cin >> x4;
	if (SearchDelete(a, n, x4) == 1)
	{
		cout << "Xoa thanh cong\n";
		output2(a, n);
	}
	else
		cout << "Xoa that bai\n";

	return 0;
}