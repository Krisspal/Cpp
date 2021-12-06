#include <iostream>

using namespace std;

int FIBO(int n)
{
	int u = 0, v = 1, t, i = 3;
	while (i <= n)
	{
		t = u + v;
		u = v;
		v = t;
		i++;
	}
	return t;
}

int main()
{
	int n;
	cout << "Nhap so nguyen duong:\n";
	cin >> n;
	cout << "Chuoi Fibonacci den so thu " << n;
	cout << "\n0, 1, ";
	for (int i = 3; i <= n; i++)
		cout << ", " << FIBO(i);
	cout << endl;
	system("pause");
	return 0;

}
