#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int MAXSIZE = 100;

void DEM(int a[], int n)
{
	int seen[MAXSIZE];
	for (int i = 0; i < n; i++)
		seen[i] = 0;

	for (int i = 0; i < n; i++) {
		if (seen[i] == 0) 
		{
			int count = 0;
			for (int j = i; j < n; j++)
				if (a[j] == a[i]) 
				{
					count += 1;
					seen[j] = 1;
				}
			cout << endl;
			cout << a[i] << " Xuat hien " << count << " lan";
		}
	}
}


int main()
{
	int n, a[MAXSIZE];
	cout << "Nhap so phan tu cua mang\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		/*cout << "Nhap phan tu thu " << i << ": ", cin >> a[i];*/
		a[i] = rand() % 100;
	}
	cout << endl;
	cout << "Xuat mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(9) << a[i];
		if (i % 10 == 0 && i != 0)
			cout << endl;
	}
	DEM(a, n);

	return 0;

}