#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int MAXSIZE = 100;
void TAOMANG(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 20 + 1;
	}
	cout << endl;
}

void XUATMANG(int A[], int n)
{
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << A[i] << " ";
		if (i % 10 == 0 && i != 0)
		{
			cout << endl;
		}
	}
	cout << endl;
}

int POSMIN(int A[], int n)
{
	int pos, min = A[0];
	for (int i = 0; i < n; i++)
	{
		if (min > A[i])
		{
			int min = A[i];
			pos = i;
		}
	}
	return pos;
}

void SAPXEP(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] > A[j])
			{
				int tam = A[i];
				A[i] = A[j];
				A[j] = tam;
			}
		}
	}
}

void DEM(int A[], int n)
{
	int seen[MAXSIZE];
	for (int i = 0; i < n; i++)
		seen[i] = 0;
	for (int i = 0; i < n; i++)
	{
		if (seen[i] == 0)
		{
			int count = 0;
			for (int j = 1; j < n; j ++)
			{	
				if (A[j] == A[i])
				{
					count += 1;
					seen[j] = 1;

				}
			}
			cout << endl;
			cout << A[i] << "Xuat hien " << count << " lan";
		}
	}
}
int main()
{
	int n, A[MAXSIZE];
	cout << "Nhap so phan tu cua mang\n";
	cin >> n;
	TAOMANG(A, n);
	XUATMANG(A, n);
	cout << "Vi tri phan tu nho nhat cua mang la " << POSMIN(A, n) << endl;
	cout << "Sap xep mang tang dan\n";
	SAPXEP(A, n);
	XUATMANG(A, n);
	return 0;
}
