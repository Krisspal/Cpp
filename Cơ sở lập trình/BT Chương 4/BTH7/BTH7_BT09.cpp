#include <iostream>

using namespace std;

int SONGAY(int d, int m, int y)
{
	int kq, T2;
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 == 0))
		T2 = 29;
	else
		T2 = 28;
	switch (m)
	{
	case 1:
		kq = d;
		break;
	case 2:
		kq = 31 + d;
		break;
	case 3:
		kq = 31 + T2 + d;
		break;
	case 4:
		kq = 31 * 2 + T2 + d;
		break;
	case 5:
		kq = 31 * 2 + T2 + 30 + d;
		break;
	case 6:
		kq = 31 * 3 + T2 + 30 + d;
		break;
	case 7:
		kq = 31 * 3 + T2 + 30 * 2 + d;
		break;
	case 8:
		kq = 31 * 4 + T2 + 30 * 2 + d;
		break;
	case 9:
		kq = 31 * 5 + T2 + 30 * 2 + d;
		break;
	case 10:
		kq = 31 * 6 + T2 + 30 * 3 + d;
		break;
	case 11:
		kq = 31 * 6 + T2 + 30 * 3 + d;
		break;
	case 12:
		kq = 31 * 6 + T2 + 30 * 4 + d;
		break;
	}
	return kq;
}

int main()
{
	int d, m, y;
	cout << "Nhap ngay,thang, nam\n";
	cin >> d >> m >> y;
	cout << "So ngay ke tu ngay dau tien cua nam la: " << SONGAY(d, m, y) << endl;

	system("pause");
	return 0;

}