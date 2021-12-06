#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int bin, dec = 0, i = 0, tam;
	cout << "Nhap so nhi phan: "; 
	cin >> bin;
	tam = bin;
	do

	{
		dec = dec + (tam % 10) * pow(2, i);
		tam = tam / 10;
		i++;
	} while (tam > 0);
	cout << "So he 10 la: " << dec << endl;
	system("pause");
	return 0;
}