#include <iostream>

using namespace std;

//Cau a
int TONG(int n)
{
	if (n == 1)
		return 1;
	else
		return n + TONG(n - 1);
}//Cau b
int TONGMU(int n)
{
	if (n == 1)
		return 1;
	else
		return TONGMU(n - 1)+ n*n;
}
//Cau c
double TONGPHANSO(int n)
{
	if (n == 1)
		return 1;
	else
		return TONGPHANSO(n - 1) + 1.0 / (2 * n - 1);
}
//Cau d
int TONGGT(int n)
{
	if (n == 0)
		return 1;
	else
		return TONGGT(n - 1) * n;
}
int main()
{
	int n;
	cout << "Nhap so nguyen n (n la so le (dieu kien cau 3))\n";
	cin >> n;
	cout << "S1 = " << TONG(n) << endl;
	cout << "S2 = " << TONGMU(n) << endl;
	cout << "S3 = " << TONGPHANSO(n) << endl;
	cout << "S4 = " << TONGGT(n) << endl;
	return 0;
}