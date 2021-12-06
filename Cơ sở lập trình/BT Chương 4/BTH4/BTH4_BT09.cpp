#include <iostream>

using namespace std;

int main()
{
	int i, n1, n2, dem = 0;
	do 
	{
		cout << "Nhap 2 so nguyen (n1 < n2): "; 
		cin >> n1 >> n2;
		if (n1 >= n2)
			cout << "Nhap sai! Vui long nhap lai.\n";
	} while (n1 >= n2);
	i = n1;
	while (i <= n2)
	{
		if (10 % i == 0)
			dem++;
		i++;
	}
	cout << "So uoc cua 10 tu " << n1 << " den " << n2 << " la " << dem <<endl;

	system("pause");
	return 0;
}