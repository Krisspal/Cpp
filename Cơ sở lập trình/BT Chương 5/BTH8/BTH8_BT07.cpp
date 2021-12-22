//#include <iostream>
//#include <cstdlib>
//#include <iomanip>
//
//
//using namespace std;
//
//void posmin(int a[],int n)
//{
//	int i = 0, vitri = 0, min = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (min > a[i])
//		{
//			min = a[i];
//			vitri = i;
//		}
//	}
//	cout << "\nPhan tu nho nhat la " << min << endl;
//	cout << "Vi tri cua phan tu la " << vitri << endl;
//}
//const int MAXSIZE = 100;
//
//
//int main()
//{
//	int n, a[MAXSIZE];
//	cout << "Nhap so phan tu:\n";
//	cin >> n;
//	cout << "Nhap phan tu cua mang:\n";
//	for (int i = 0; i < n; i++)
//
//	/*cin >> a[i];*/
//	a[i] = rand() % 100;
//
//	cout << "Xuat mang\n";
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 10 == 0)
//			cout << endl;
//		cout << setw(9) << a[i];
//	}
//	
//	posmin(a, n);
//
//	system("pause");
//	return 0;
//}