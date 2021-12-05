#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a,b,c,p;
	
	cout << "Nhap chieu dai ba canh tam giac" << endl;
	cout << "Canh 1: "; 
	cin >> a;
	cout << "Canh 2: "; 
	cin >> b;
	cout << "Canh 3: "; 
	cin >> c;
	 
	//Tinh p:
	p = (a + b + c) / 2;

	cout << "Dien tich tam giac la: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;

	return 0;
}
