#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Khai bao bien
	int n, a, b, c, n1;

	//Nhap so
	cout << "Nhap so co ba chu so: "; 
	cin >> n;

	//Sap xep lai so
	c = n % 10;
	b = n / 10 % 10;
	a = n / 100;
	n1 = c * 100 + b * 10 + a;

	//In ket qua
	cout << "So dao cua so " << n << " la so " << n1 << endl;

	system("pause");
	return 0;


}