#include <iostream>

using namespace std;
void FIBO(int n)
{
	int *p;
	p = new int[n];
	*p = 0; 
	*(p + 1) = 1;
	cout << *p << " " << *(p + 1);
	for (int i = 2; i < n; i++)
	{
		*(p + i) = *(p + (i - 2)) + *(p + (i - 1));
		cout << " " << *(p + i);
	}
	delete[]p;
	p = 0;
}

int main()
{
	int n;
	cout << "Nhap so nguyen n\n";
	do
	{
		cout << "Nhap so nguyen n (n > 1)\n";
		cin >> n;
		if (n < 1)
			cout << "Nhap sai!Vui long nhap lai\n";
	} while (n < 1);
	FIBO(n);
	cout << endl;
	return 0;
}