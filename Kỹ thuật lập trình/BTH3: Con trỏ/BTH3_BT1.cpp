#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int* p;
	p = &x;
	*p = 80;
	p = &x;
	cout << "Dia chi cua bien x la " << &x << endl;
	cout << "Dia chi luu trong con tro p la " << p << endl;
	cout << "Gia tri cua bien ma p tro den la " << *p << endl;
	cout << "Gia tri cua bien x la " << x << endl;
	return 0;
}