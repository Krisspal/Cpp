#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	bool laNguyenTo = true;
	cout << "Nhap so nguyen: "; 
	cin >> n;
	if (n >= 2)
	{
		int i = 2;
		while (i <= sqrt(static_cast<double>(n)) && laNguyenTo == true)
		{
			laNguyenTo = false;
			i++;
		}
	}
	else
		laNguyenTo = false;
	if (laNguyenTo == true)
		cout << n << " la so nguyen to" << endl;
	else
		cout << n << " khong la so nguyen to" << endl;

	system("pause");
	return 0;

}