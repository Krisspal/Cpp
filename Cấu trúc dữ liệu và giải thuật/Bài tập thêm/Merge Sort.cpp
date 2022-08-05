#include <iostream>
#include <iomanip>

using namespace std;

void Nhapds(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
}

void Xuatds(int *a, int n)
{
	cout << "Xuat danh sach:\n";
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

int* merge(int* a, int n1, int* b, int n2)
{
	int* c = new int[n1 + n2];
	
	int i = 0, j = 0, dem = 0;
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j])
			c[dem++] = a[i++];
		else
			c[dem++] = b[j++];
	}

	for (int k = i; k < n1; k++)
		c[dem++] = a[k];
	for (int k = j; k < n2; k++)
		c[dem++] = b[k];

	return c;
}

int* mergeSort(int a[], int n)
{
	if (n == 1)
		return a;
	int mid = n / 2;
	int* n1 = new int[mid];
	int* n2 = new int[n - mid];
	for (int i = 0; i < mid; i++)
		n1[i] = a[i];
	for (int i = 0; i < n - mid; i++)
		n2[i] = a[mid + i];

	n1 = mergeSort(n1, mid);
	n2 = mergeSort(n2, n - mid);

	return merge(n1, mid, n2, n - mid);
}

int main()
{
	int n, * a, * b;
	cout << "Nhap so phan tu cua danh sach muon tao: ";
	cin >> n;
	a = new int[n];
	Nhapds(a, n);
	Xuatds(a, n);

	b = mergeSort(a, n);
	cout << "Danh sach sau khi sap xep:\n";
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << "\t";
		if (i % 10 == 9)
			cout << endl;
	}
	delete[]a;
	delete[]b;
	a = NULL;
	b = NULL;
	return 0;
}
