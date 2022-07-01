//#include <iostream>
//#include <iomanip>
//#include <algorithm>
//#define MAX 100
//using namespace std;
//
//void nhapn(int& n)
//{
//	do
//	{
//		cout << "Nhap so phan tu\n";
//		cin >> n;
//		if (n <= 0 || n > 100)
//			cout << "Nhap sai! Nhap lai\n";
//	} while (n <= 0 || n > 100);
//}
//
//void input(int a[], int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = rand() % 100 + 1;
//	}
//	
//}
//
//void output(int a[], int n)
//{
//	//sort list 
//	sort(a, a + n);
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << "\t";
//		if (i % 10 == 9)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//}
//
//int insertSorted(int a[], int& n)
//{
//	int x, pos;
//	cout << "Nhap so can chen\n";
//	cin >> x;
//
//	if (n >= MAX)
//		return 0;
//	
//	for (int i = 0; i < n; ++i)
//	{
//		if (a[i] < x)
//		{
//			pos = i;
//		}
//	}
//	
//	n++;
//
//	for (int i = n - 1; i >= pos ; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[pos + 1] = x;
//	
//	return 1;
//}
//
//int main()
//{
//	int a[MAX];
//	int n, x;
//	
//	nhapn(n);
//	input(a, n);
//	output(a, n);
//	
//	if (insertSorted(a, n) == 1)
//	{
//		cout << "Chen thanh cong\n";
//		output(a, n);
//	}
//	else
//		cout << "Chen that bai\n";
//	
//	return 0;
//}