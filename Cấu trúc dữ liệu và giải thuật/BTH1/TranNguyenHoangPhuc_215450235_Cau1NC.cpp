//#include <iostream>
//#include <iomanip>
//using namespace std;
//#define MAX 100
//
//void menu()
//{
//	cout << "Chon loai danh sach muon tao\n";
//	cout << "1. Toan bo phan tu so nguyen duong\n";
//	cout << "2. Toan bo phan tu so nguyen am\n";
//	cout << "3. Toan bo phan tu so nguyen chan\n";
//	cout << "4. Toan bo phan tu so nguyen le\n";
//	cout << "5. Phan tu so nguyen vua am vua le\n";
//	cout << "6. Phan tu so nguyen nam trong khoang tu 10 den 50.\n";
//}
//void input(int a[], int &n, int chon)
//{
//	cout << "Nhap so phan tu cua danh sach\n";
//	cin >> n;
//	
//	switch (chon)
//	{
//	case 1:
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = rand() % 100;
//		}
//		break;
//	case 2:
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = rand() % 100 - 101;
//		}
//		break;
//	case 3:
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = rand() % 100 * 2;
//		}
//		break;
//	case 4:
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = rand() % 100 * 2 + 1;
//		}
//		break;
//	case 5:
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = (rand() % 100 - 1000) * 2 + 1;
//		}
//		break;
//	case 6:
//		for (int i = 0; i < n; i++)
//		{
//			a[i] = rand() % (50 - 10 + 1) + 10;
//		}
//		break;
//	}
//}
//
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << setw(9) << a[i];
//		if (i % 10 == 9)
//		{
//			cout << endl;
//		}
//	}
//}
//
//int main()
//{
//	int a[MAX], n, chon;
//	menu();
//	do
//	{
//		cout << "Nhap loai dnah sach muon tao\n";
//		cin >> chon;
//		if (chon <= 0 || chon > 6)
//			cout << "Nhap sai! Nhap lai\n";
//	} while (chon <= 0 || chon > 6);
//	input(a, n, chon);
//	output(a, n);
//}