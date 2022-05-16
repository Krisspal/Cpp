#include <iostream>
#include <cctype>
using namespace std;

int DEMNGAY(char S[11])
{
	char D[3], M[3], Y[5];
	int d, m, y, T2, kq;
	strncpy_s(D, S, 2);
	D[2] = '\0';
	strncpy_s(M,S + 3 ,2);
	M[2] = '\0';
	strncpy_s(Y, S + 6, 4);
	Y[4] = '\0';
	d = atoi(D);
	m = atoi(M);
	y = atoi(Y);
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		T2 = 29;
	else
		T2 = 28;
	switch (m)
	{
	case 1:
		kq = d;
		break;
	case 2:
		kq = d + 31;
		break;
	case 3:
		kq = T2 + 31 + d;
		break;
	case 4:
		kq = T2 + 31 * 2 + d;
		break;
	case 5:
		kq =  T2 + 31 * 2 + 30 + d;
		break;
	case 6:
		kq =  T2 + 31 *3 + 30  + d;
		break;
	case 7:
		kq =  T2 + 31 * 3 + 30 * 2 + d;
		break;
	case 8:
		kq = T2 + 31 * 4 + 30 * 2 + d;
		break;
	case 9:
		kq = T2 + 31 * 5 + 30 * 2 + d;
		break;
	case 10:
		kq = T2 + 31 * 5 + 30 * 3 + d;
		break;
	case 11:
		kq = T2 + 31 * 6 + 30 * 3 + d;
		break;
	case 12:
		kq = T2 + 31 * 6 + 30 * 4 + d;
		break;
	}
	return kq;
}
int main()
{
	char s[100];
	cout << "Nhap ngay thang nam (dd-mm-yyyy)\n";
	cin.getline(s, 100);
	cout << "So ngay ke tu ngay dau nam la " << DEMNGAY(s) << endl;
	return 0;
}