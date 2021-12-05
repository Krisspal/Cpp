#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, delta;
	cout << "Nhap vao 3 he so PT bac 2 dang ax^2 + bx + c = 0: ";
	cin >> a >> b >> c;
	delta = pow(b,2) - 4 * a * c;
	if(delta > 0)
	{
		cout << "Nghiem x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		cout << "Nghiem x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
	}
	else
		if(delta == 0)
			cout << "Phuong trinh co nghiem kep x = " << -b / (2 * a);
		else
			cout << "Phuong trinh vo nghiem";

	system("pause");
	return 0;

}