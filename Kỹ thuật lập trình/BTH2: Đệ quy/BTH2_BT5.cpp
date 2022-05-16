#include <iostream>

using namespace std;

int DEMSO(int n)
{
	if (n > 0 && n <= 9)
	{
		return 1;
	}
	else
		return DEMSO(n / 10) % 10 + 1;
}
int main()
{
	int n;
	cout << "Nhap so nguyen n > 0\n";
	cin >> n;
	cout << "So chu so cua " << n << " la " << DEMSO(n) << endl;
	return 0;
}