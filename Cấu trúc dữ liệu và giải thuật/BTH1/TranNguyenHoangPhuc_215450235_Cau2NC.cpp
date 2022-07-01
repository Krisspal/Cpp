//#include <iostream>
//#include <iomanip>
//#define MAX 100
//
//using namespace std;
//
//void nhap_n(int& n)
//{
//	do
//	{
//		cout << "Nhap so phan tu cua danh sach\n";
//		cin >> n;
//		if (n < 0)
//		{
//			cout << "Nhap sai! Nhap lai\n";
//		}
//	} while (n < 0);
//}
//
////Với yêu cầu những vị trí hay chỉ số của danh sách) là số lẻ chỉ nhận giá trị nhập vào là số lẻ, và những vị
////trí (hay chỉ số của danh sách) là số chẵn chỉ nhận giá trị nhập vào là số chẵn.
//void input(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a[i] = rand() % 100 * 2;
//		}
//		else
//		{
//			a[i] = rand() % 100 * 2 + 1;
//		}
//	}
//}
//
//void output(int a[], int n)
//{
//	cout << "Xuat mang tren nhieu dong\n";
//	for (int i = 0; i < n; i++)
//	{
//		cout << setw(9) << a[i];
//		if (i % 10 == 9)
//			cout << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int a[MAX];
//	int n;
//	nhap_n(n);
//	input(a, n);
//	output(a, n);
//	return 0;
//}