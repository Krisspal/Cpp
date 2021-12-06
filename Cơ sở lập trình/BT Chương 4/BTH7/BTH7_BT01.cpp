#include <iostream>

using namespace std;

bool KTNhuan(int n)
{
	bool kq;
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		kq = true;
	else
		kq = false;

	return kq;
}

int main()
{
	int nam;
	cout << "Nhap nam:";
	cin >> nam;
	if (KTNhuan(nam) == true)
		cout << nam << " la nam nhuan" << endl;
	else
		cout << nam << " khong phai la nam nhuan" << endl;

	system("pause");
	return 0;
}