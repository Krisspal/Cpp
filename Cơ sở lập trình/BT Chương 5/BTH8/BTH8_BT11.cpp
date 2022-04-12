#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void TANG(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1 ; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
			
		}
		
	}
}

const int MAXSIZE = 100;

int main()
{
	int a[MAXSIZE], n;
	cout << "Nhap kich thuoc mang\n";
	cin >> n;
	cout << "Nhap phan tu mang\n";
	for (int i = 0; i < n; i++)
	{
		/*cin >> a[i];*/
		a[i] = rand() % 100;
	}
	
	
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << a[i];
		if (i % 10 == 0 && i != 0)
			cout << endl;
	}
	cout << "\nSap xet cac phan tu tang dan\n";
	
	TANG(a, n);
	
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << a[i];
		if (i % 10 == 0 && i != 0)
			cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
