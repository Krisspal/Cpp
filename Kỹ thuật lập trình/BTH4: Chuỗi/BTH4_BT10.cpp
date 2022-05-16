#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ngaythang[100], D[10], M[10], Y[10];
	int n, d, m, y;
	cout << "Nhap ngay, thang, nam (mm/dd/yy)\n";
	cin.getline(ngaythang, 100);
	strncpy_s(M, ngaythang, 2);
	M[2] = '\0';
	strncpy_s(D, ngaythang + 3, 2);
	D[2] = '\0';
	strncpy_s(Y, ngaythang + 6, 4);
	Y[4] = '\0';
	d = atoi(D);
	m = atoi(M);
	y = atoi(Y);
	if (y > 30)
		y += 1900;
	else
		y += 2000;
	switch (m)
	{
	case 1:
		cout << "January " << d << ", " << y << endl;
		break;
	case 2:
		cout << "February " << d <<", " << y << endl;
		break;
	case 3:
		cout << "March " << d <<", " << y << endl;
		break;
	case 4:
		cout << "April " << d << "," << y << endl;
		break;
	case 5:
		cout << "May " << d <<", " << y << endl;
		break;
	case 6:
		cout << "June " << d <<", " << y << endl;
		break;
	case 7:
		cout << "July " << d <<", " << y << endl;
		break;
	case 8:
		cout << "August " << d <<", " << y << endl;
		break;
	case 9:
		cout << "November " << d <<", " << y << endl;
		break;
	case 10:
		cout << "October " << d <<", " << y << endl;
		break;
	case 11:
		cout << "November " << d <<", " << y << endl;
		break;
	case 12:
		cout << "December " << d <<", " << y << endl;
		break;
	}
	return 0;
}

