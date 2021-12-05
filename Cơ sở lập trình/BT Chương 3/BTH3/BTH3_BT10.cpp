#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Nhap vao so nguyen: "; 
	cin >> a;
	if (a % 2 == 0)
		cout << a << " la so chan";
	else
		cout << a << " la so le";

	cout << endl;
	system("pause");
	return 0;
		
}