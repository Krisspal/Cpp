#include <iostream>

using namespace std;

int main()
{
	double diem;
	cout << "Nhap diem: "; 
	cin >> diem;
	if (diem < 0 || diem >10)
		cout << "Nhap sai diem";
	else
		if (diem >= 5)
			cout << "Ban da dau";
		else
			cout << "Ban da rot";

	cout << endl;
	system("pause");
	return 0;

}