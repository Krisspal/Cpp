#include <iostream>

using namespace std;

void hoandoi(int a, int b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}

int main()
{
	int a, b;
	cout << "Nhap hai so nguyen: ";
	cin >> a >> b;
	if (a > b)
		hoandoi(a, b);
	cout << "Hai so nguyen tang dan " << a << " ," << b << endl;

	system("pause");
	return 0;
}