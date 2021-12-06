#include <iostream>

using namespace std;

int main()
{
	int n1, n2, demchan = 0, demle = 0, uoc10 = 0;
	do
	{
		cout << "Nhap hai so nguyen duong (n1 < n2):\n";
		cin >> n1 >> n2;
		if (n1 >= n2 || n1 <= 0 || n2 <= 0)
			cout << "Nhap sai!Vui long nhap lai!\n";
	} while (n1 >= n2 || n1 <= 0 || n2 <= 0);
	for (int i = 1; i <= n2; i++)
	{
		if (i % 2 == 0)
			demchan++;
		else
			demle++;
		if (10 % i == 0)
			uoc10++;
	}
	cout << "So so chan: " << demchan << endl;
	cout << "So so le: " << demle << endl;
	cout << "So uoc cua 10: " << uoc10 << endl;
	system("pause");
	return 0;
}