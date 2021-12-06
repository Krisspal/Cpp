#include <iostream>

using namespace std;

void hoandoi(int& a, int& b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void GIAM2(int a, int b)
{
	if (a < b)
		hoandoi(a, b);
	cout << a << " " << b << endl;
}
void TANG3(int a, int b, int c)
{
	if (a > b)
		hoandoi(a, b);
	if (a > c)
		hoandoi(a, c);
	if (b > c)
		hoandoi(b, c);
	cout << a << " " << b << " " << c << endl;
}

void GIAM3(int a, int b, int c)
{
	if (a < b)
		hoandoi(a, b);
	if (a < c)
		hoandoi(a, c);
	if (b < c)
		hoandoi(b, c);
	cout << a << " " << b << " " << c << endl;
}

int main()
{
	int a, b, c;
	cout << "Nhap 3 so nguyen:\n";
	cin >> a >> b >> c;
	cout << "Hai so nguyen giam dan:\n";
	GIAM2(a, b);
	cout << "Ba so nguyen tang dan:\n";
	TANG3(a, b, c);
	cout << "Ba so nguyen giam dan:\n";
	GIAM3(a, b, c);
	
	system("pause");
	return 0;
}