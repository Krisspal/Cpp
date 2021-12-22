//#include <iostream>
//#include <cstdlib>
//#include <iomanip>
//
//using namespace std;
//
//void XOATRUNG(int a[], int &n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n;)
//		{
//			if (a[j] == a[i])
//			{
//				for (int k = j; k < n; k++)
//				{
//					a[k] = a[k + 1];
//				}
//				--n;
//			}
//			else
//				j++;
//		}
//	}
//}
//
//const int MAXSIZE = 100;
//int main()
//{
//	int n, a[MAXSIZE];
//	cout << "Nhap so phan tu cua mang:\n";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		/*cout << "Nhap phan tu thu " << i << ": ", cin >> a[i];*/
//		a[i] = rand() % 100;
//	}
//	cout << endl;
//	cout << "Mang ban dau:\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << setw(9) << a[i];
//		if (i % 10 == 0 && i != 0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//	XOATRUNG(a, n);
//	cout << "Mang sau khi da xoa trung:\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << setw(9) << a[i];
//		if (i % 10 == 0 && i != 0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//	return 0;
//}