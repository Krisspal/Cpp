#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream Xuat("D:/BT4.txt");
	char ch;
	while (Xuat)
	{
		Xuat.get(ch);
		if (ch == 'U' || ch == 'E' || ch == ' O ' || ch == 'A' || ch == 'I')
		{
			 cout << ch;
		}
	}
	Xuat.close();
	return 0;
}