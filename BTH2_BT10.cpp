#include <iostream>

using namespace std;

int main()
{
	char a;
	int b;
	cout << "a)" << endl;
	cout << "Nhap vao ky tu: "; 
	cin >> a;
	cout << "Ma ASCII cua ky tu la: " << int(a) << endl;
	cout << "b)" << endl;
	cout << "Nhap vao so nguyen (1-255): "; 
	cin >> b;
	cout << "Ma ASCII cua so la: " << char(b) << endl;
	system("pause");
	return 0;
}