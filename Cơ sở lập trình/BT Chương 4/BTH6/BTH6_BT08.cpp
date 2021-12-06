#include <iostream>

using namespace std;

double chuvihv(double a)
{
	return a * 4;
}

double dientichhv(double a)
{
	return a * a;
}

void INHVR(int a, char kt)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
			if (i == 1 || i == a || j == 1 || j == a)
				cout << kt;
			else
				cout << " ";
		cout << endl;
	}
}

int main()
{
	double n;
	char kt;
	do
	{

		cout << "Nhap vao canh hinh vuong:\n";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai vui! Vui long nhap lai!\n";
	} while (n <= 0);

	cout << "Nhap ky tu: ";
	cin >> kt;
	cout << "a) Chu vi hinh vuong la: " << chuvihv(n) << endl;
	cout << "b) Dien tich hinh vuong la: " << dientichhv(n) << endl;
	cout << "c)\n";
	INHVR(n, kt);
	system("pause");
	return 0;
}