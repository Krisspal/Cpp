#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char hoten[100];
	int i, n, tach;
	cout << "Nhap ho, ten\n";
	cin.getline(hoten, 100);
	//Tach ho va ten
	n = strlen(hoten);
	i = n - 1;
	while (i > 0)
	{
		if (isspace(hoten[i]))
		{
			tach = i;
			break;
		}
		else
			i--;
	}
	cout << "Ho va lot: ";
	for (int j = 0; j <= tach; j++)
		cout << hoten[j];
	cout << endl;
	cout << "Ten: ";
	for (int j = tach + 1; j < n; j++)
		cout << hoten[j];
	cout << endl;
	return 0;
}