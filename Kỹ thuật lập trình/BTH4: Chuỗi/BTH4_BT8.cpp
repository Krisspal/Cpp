#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char hoten[100];
	int i, n, tachten, tachho;
	cout << "Nhap ho va ten\n";
	cin.getline(hoten, 100);
	n = strlen(hoten);
	//Tach ten
	for (int i = n - 1; i > 0; i--)
	{
		if (isspace(hoten[i]))
		{
			tachten = i;
			break;
		}
	}
	//Tach ho
	for (int i = 0; i < n; i++)
	{
		if (isspace(hoten[i]))
		{
			tachho = i;
			break;
		}
	}
	cout << "Ho: ";
	for (int j = 0; j <= tachho; j++)
	{
		cout << hoten[j];
	}
	cout << endl;
	//Tach ten lot
	cout << "Ten lot: ";
	for (int j = tachho + 1; j < tachten; j++)
	{
		cout << hoten[j];
	}
	cout << endl;
	cout << "Ten:";
	for (int j = tachten; j < n; j++)
	{
		cout << hoten[j];
	}
	cout << endl;
	return 0;
}