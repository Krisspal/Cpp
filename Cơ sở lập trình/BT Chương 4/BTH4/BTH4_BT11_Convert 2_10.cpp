#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int dec ,bin = 0, i = 0;
	cout << "Nhap so he 10: "; 
	cin >> dec;
	while (dec > 0)
	{
		bin = bin + (dec % 2) * pow(10, i);
		dec = dec / 2;
		i++;
	}
	cout << "So nhi phan: " << bin << endl;
	system("pause");
	return 0;
}