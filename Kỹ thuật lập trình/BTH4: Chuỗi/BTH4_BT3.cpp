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
void DEMSP(char* s, int& n)
{
	int dem = 0;
	for (int i = 0;i < n ; i++)
	{
		if(isspace(s[i]))
			dem++;
	}
	cout << "So khoang trang cua chuoi la " << dem << endl;
}
//c
void DEMCHARNUM(char* s, int& n)
{
	int demchu = 0, demso = 0;
	for (int i = 0; i < n; i++)
	{
		if (isalpha(s[i]))
			demchu++;
		if (isdigit(s[i]))
			demso++;
	}
	cout << "So chu cai trong chuoi la " << demchu << endl;
	cout << "So chu so trong chuoi la " << demso << endl;
}
//d
void DEMUPPER(char* s, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (isupper(s[i]))
			dem++;
	}
	cout << "So chu cai in hoa trong chuoi la " << dem << endl;
}
//e
void DEMLOWER(char* s, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (islower(s[i]))
			dem++;
	}
	cout << "So chu cai in thuong trong chuoi la " << dem << endl;
}
//f
char* UPPER(char* s, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (islower(s[i]) )
			s[i] = s[i] - 32;
	}
	return s;
}
//g
char* LOWER(char* s, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (isupper(s[i]))
			s[i] = s[i] + 32;
	}
	return s;
}
//h
char* UPPER1STCHAR(char* s, int& n)
{
	if (islower(s[0]))
		s[0] = s[0] - 32;
	for (int i = 0; i < n - 1 ; i++)
	{
		if (isspace(s[i]) && islower(s[i + 1]))
			s[i + 1] = s[i + 1] - 32;	
		else
			if (!isspace(s[i + 1]) && isupper(s[i + 1]))
				s[i + 1] += 32;
	}
	return s;
}
//i
int DEMCHAR(char* s, int& n)
{
	int dem = 0;
	if (s[0] != ' ')
		dem = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
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
	cout << endl;
	//b
	DEMSP(s, n);
	//c
	DEMCHARNUM(s, n);
	DEMUPPER(s, n);
	DEMLOWER(s, n);
	cout << UPPER(s, n) << endl;;
	cout << LOWER(s, n) << endl;
	cout << UPPER1STCHAR(s, n) << endl;
	cout << DEMCHAR(s, n) << endl;
	return 0;
}
