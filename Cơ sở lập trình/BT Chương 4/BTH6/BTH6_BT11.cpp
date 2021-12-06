#include <iostream>

using namespace std;

bool palindrome(int a)
{
	int chs, kq = 0, tam;
	tam = a;
	do
	{
		chs = tam % 10;
		kq = (kq * 10) + chs;
		tam = tam / 10;
	} while (tam > 0);

	if (a == kq)
		return true;
	else
		return false;
}

int main()
{
	int n;
	cout << "Nhap so nguyen duong:\n";
	cin >> n;
	if (palindrome(n) == true)
		cout << n << " la so doi xung " << endl;
	else
		cout << n << " khong la so doi xung" << endl;

	system("pause");
	return 0;
}