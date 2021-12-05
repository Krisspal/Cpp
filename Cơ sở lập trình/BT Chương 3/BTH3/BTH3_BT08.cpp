#include <iostream>
using namespace std;

int main()
{
	int m, y;
	cout << "Nhap thang: "; 
	cin >> m;
	cout << "Nhap nam: "; 
	cin >> y;
	
	if (m < 0 || m > 12)
		cout << "Nhap sai thang";
	else 
		if ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) && m == 2)
			cout << "So ngay cua thang " << m << " nam " << y << " la 29 ngay";
		else
			if ((y % 400 != 0 || (y % 4 != 0 && y % 100 == 0)) && m == 2)
				cout << "So ngay cua thang " << m << " nam " << y << " la 28 ngay";
			else
				if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
					cout << "So ngay cua thang " << m << " nam " << y << " la 31 ngay";
				else
					cout << "So ngay cua thang " << m << " nam " << y << " la 330 ngay";

	cout << endl;
	system("pause");
	return 0;
	
}