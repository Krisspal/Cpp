#include <iostream>
#include <cctype>

using namespace std;

void HO(char* hoten, int n)
{
	int tachho=0;
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
void TEN(char* hoten, int n)
{
	int tachten=0;
	for (int i = n - 1; i > 0; i--)
	{
		if (isspace(hoten[i]))
		{
			tachten = i;
			break;
		}
	}
	cout << "Ten:";
	for (int j = tachten; j < n; j++)
	{
		cout << hoten[j];
	}
}
void TENLOT(char* hoten, int n)
{
	int ten=0,ho=0,tenlot=0;
	for (int i = 0; i < n; i++)
	{
		if(isspace(hoten[i]))
		{ 
			ten = i;
		}
	}
	for (int i = n - 1; i > 0; i--)
	{
		if (isspace(hoten[i]))
		{
			ho = i;
		}
	}
	cout << "Ten lot: ";
	for (int j = ho + 1; j < ten; j++)
	{
		cout << hoten[j];
	}
	cout << endl;
}
int main() 
{
	int n;
	char HOTEN[50];
	cout << "Nhap ho va ten\n";
	cin.getline(HOTEN, 50);
	n = strlen(HOTEN);
	HO(HOTEN,n);
	TENLOT(HOTEN, n);
	TEN(HOTEN, n);
	return 0;
}
