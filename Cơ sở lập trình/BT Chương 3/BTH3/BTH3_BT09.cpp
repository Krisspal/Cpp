#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a, b;
	char pt;
	cout << "Nhap vao 2 so nguyen va 1 phep toan: ";
	cin >> a >> b >> pt;
	switch (pt)
	{
	case '+':
		cout << a << " + " << b << " = " << a + b;
		break;
	case '-':
		cout << a << " - " << b << " = " << a - b;
		break;
	case '*':
		cout << a << " * " << b << " = " << a * b;
		break;
	case '/':
		if (b != 0)
			cout << a << " / " << b << " = " << fixed << setprecision(2) << (double)a / b;
		else
			cout << "Loi chia 0";
		break;
	default:
		cout << "Khong pahi phep toan";
	}

	cout << endl;
	system("pause");
	return 0;
}