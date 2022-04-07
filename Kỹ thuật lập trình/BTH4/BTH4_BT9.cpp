#include <iostream>
#include <cctype>

using namespace std;

void HO(char* hoten, int n)
{
	int tachho;
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
}