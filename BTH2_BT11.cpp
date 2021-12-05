#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	const double pi = 3.141593;
	cout << "Nhap goc vao: "; 
	cin >> x;
	
	//Doi tu do sang radian
	x = x * pi / 180;
	
	cout << "sin cua goc la: " << sin(x) << endl;
	cout << "cos cua goc la: " << cos(x) << endl;
	cout << "tan cua goc la: " << tan(x) << endl;

	system("pause");
	return 0;
}