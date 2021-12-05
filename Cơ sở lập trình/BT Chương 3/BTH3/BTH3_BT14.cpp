#include <iostream>

using namespace std;

int main()
{
	int a, b, c, temp;
	cout << "Nhap 3 so nguyen: "; 
	cin >> a >> b >> c;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c);
	{
		temp = b;
		b = c;
		c = temp;
	}
	cout << "Day xep tang: " << a << " " << b << " " << c << endl;
	system("pause");
	return 0;
}