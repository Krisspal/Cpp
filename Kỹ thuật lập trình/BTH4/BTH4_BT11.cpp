#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ho, chulot, ten, s;
	cout << "Nhap ho: ";
	getline(cin, ho);
	cout << "Nhap chu lot: ";
	getline(cin, chulot);
	cout << "Nhap ten: ";
	getline(cin, ten);
	s = ho + " " + chulot + " " + ten;
	cout << s << endl;
	return 0;
}