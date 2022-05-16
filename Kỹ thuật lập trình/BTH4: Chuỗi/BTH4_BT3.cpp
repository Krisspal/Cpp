#include <iostream>
#include <cctype>

using namespace std;

//a
void XOASP(char* s, int& n)
{
	int dem = 0;
	for (int i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
			s[dem++] = s[i];
	}
	s[dem] = '\0';
	cout << endl;
}
//b
int *DEMSP(char* s, int &n)
{
	int *dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (isspace(s[i]))
			dem += 1;
	}
	return dem;
}
//c
void DEMCHARNUM(char* s, int& n)
{
	int demchu = 0, demso = 0;
	for (int i = 0; i < n; i++)
	{
		if (isalpha(s[i]))
			demchu++;
		if (isalnum(s[i]))
			demso++;
	}
	cout << "So chu cai trong chuoi la " << demchu << endl;
	cout << "So chu so trong chuoi la " << demso << endl;
}
//d
int DEMUPPER(char* s, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (isupper(s[i]))
			dem++;
	}
	return dem;
}
//e
int DEMLOWER(char* s, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (islower(s[i]))
			dem++;
	}
	return dem;
}
//f
void UPPER(char* s, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (islower(s[i]))
			s[i] = s[i] - 32;
	}
}
//g
void LOWER(char* s, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (isupper(s[i]))
			s[i] = s[i] + 32;
	}
}
//h
void UPPER1STCHAR(char* s, int& n)
{
	if (islower(s[0]))
		s[0] = s[0] - 32;
	for (int i = 0; i < n; i++)
	{
		if (isspace(s[i]))
		{
			if (islower(s[i + 1]))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
}
//i
int DEMCHAR(char* s, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (!isspace(s[i]))
			dem++;
	}
	return dem;
}

int main()
{
	char s[100];
	int n;
	cout << "Nhap chuoi:\n";
	cin.getline(s, 100);
	n = strlen(s);
	//a
	XOASP(s, n);
	cout << s;
	//b
	cout << "So khoang trang cua chuoi la " << *DEMSP << endl;
	//c
	DEMCHARNUM(s, n);
	return 0;
}