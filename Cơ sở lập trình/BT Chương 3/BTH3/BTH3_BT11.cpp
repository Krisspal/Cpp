#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap vao so nguyen: ";
	cin >> n;
	if (n > 0)
		cout << n << " la so duong";
	else
		if (n < 0)
			cout << n << " la so am";
		else
			cout << n << " la so 0";

	cout << endl;
	system("pause");
	return 0;
}