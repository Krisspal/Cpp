#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int m;
	ifstream inFILE;
	inFILE.open("D:/BT1.txt", ios::in);
	if (inFILE.is_open())
	{
		inFILE >> m;
		cout << "Ghi thanh cong\n";
	}
	else
	{
		cout << "Mo file khong thanh cong\n";
	}
	cout << "Tong = " << m << endl;
	return 0;
}