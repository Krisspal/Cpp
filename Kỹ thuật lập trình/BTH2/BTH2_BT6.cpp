#include <iostream>

using namespace std;

void DAONGUOC(int n)
{
	if (n > 0 && n <= 9)
		cout << n;
	else
	{
		cout << n % 10;
		DAONGUOC(n / 10);
	}
}
int main()
{
	int n;
	cout << "Nhap so nguyen n\n";
	cin >> n;
	cout << "Dao nguoc cua " << n << " la ";
	DAONGUOC(n);
	cout << endl;
	return 0;
}