#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap vao so nguyen: ";
	cin >> n;
	if (n > 0)
		cout << "Gia tri tuyet doi cua " << n << " la " << n;
	else
		cout << "Gia tri tuyet doi cua " << n << " la " << -n;
	
	cout << endl;
	system("pause");
	return 0;


}