#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int sosach, tongsotien;
	double tienthue;
	const int tienvanchuyen = 2000;

	cout << "Nhap vao so sach: "; 
	cin >> sosach;
	cout << " Nhap vao tong so tien: "; 
	cin >> tongsotien;
	
	tienthue = tongsotien * 7.5/100;

	cout << "Tong gia tri don hang: " << int(tienthue + tongsotien + tienvanchuyen * sosach);

	system("pause");
	return 0;
}