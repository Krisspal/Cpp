//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//double TONG(int a[], int n, double x)
//{
//	double kq = 0;
//	for (int i = 0; i < n; i++)
//	{
//		kq += a[i] * pow(x, i);
//	}
//	return kq;
//}
//
//const int MAXSIZE = 100;
//
//int main()
//{
//	int a[MAXSIZE], n;
//	double x;
//	cout << "Nhap bac n cua da thuc:\n";
//	cin >> n;
//	cout << "Cac he so cua da thuc\n";
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 5 + 1;
//		cout << a[i] << " ";
//	}
//	cout << "\nNhap gia tri cua X:\n";
//	cin >> x;
//	cout << "Gia tri cua da thuc la: " << TONG(a, n, x) << endl;
//
//	system("pause");
//	return 0;
//}