#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream Xuat("D:/BT4.txt");
	char ch;
	int n, c = 0;
	while (Xuat)
	{
		Xuat.get(ch);
		n = ch;
		if ((n > 63 && n < 91) || (n > 96 && n < 123))
		{
			c++;
		}
	}
	cout << "So ky tu trong file BT4.txt la " << c << endl;
	return 0;
}