#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream Xuat;
	ofstream NhapBT6;
	char ch;
	Xuat.open("E:/VS FILE/TEXT/BT4.txt", ios::in);
	NhapBT6.open("E:/VS FILE/TEXT/BT6.txt", ios::out);
	if (Xuat.is_open())
	{
		if (NhapBT6.is_open())
		{
			while (Xuat)
			{
				Xuat >> ch;
				if (ch == 'A' || ch == 'I' || ch == 'U' || ch == 'O' || ch == 'E')
				{
					NhapBT6 << ch;
					NhapBT6 << " ";
				}
			}
			NhapBT6.close();
		}
		cout << "Ghi thanh cong!";
		Xuat.close();
	}
	else
		cout << "Ghi khong thanh cong!";
	return 0;
}
