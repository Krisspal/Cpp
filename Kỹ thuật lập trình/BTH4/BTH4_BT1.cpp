#include <iostream>
#include <cctype>

using namespace std;
char HOA(char ch)
{
	if (islower(ch))
		ch = ch - 32;
	return ch;
}

char THUONG(char ch)
{
	if (isupper(ch))
		ch = ch + 32;
	return ch;
}
int main()
{
	char s1[100], s2[100];
	int n1, n2;
	cout << "Nhap chuoi 1:\n";
	cin.getline(s1,50);
	n1 = strlen(s1);
	cout << "Nhap chuoi 2:\n";
	cin.getline(s2,50);
	n2 = strlen(s2);
	//So sanh 2 chuoi
	cout << "a)" << endl;
	if (n1 == n2)
		cout << "Chuoi 1 dai bang chuoi 2\n";
	else
	{
		if (n1 > n2)
			cout << "Chuoi 1 dai hon chuoi 2\n";
		else
			cout << "Chuoi 2 dai hon chuoi 1\n";
	}
	//In hoa chu cai dau moi chuoi
	s1[0] = HOA(s1[0]);
	for (int i = 0; i < n1; i++)
	{
		if (isspace(s1[i]))
		{
			if (islower(s1[i + 1]))
				s1[i + 1] = s1[i + 1] - 32;
		}
		
	}
	
	s2[0] = HOA(s2[0]);
	for (int i = 0; i < n2; i++)
	{
		if (isspace(s2[i]))
		{
			if (islower(s2[i + 1]))
				s2[i + 1] = s2[i + 1] - 32;
		}
	}
	//Xuat chuoi
	cout << "b)" << endl;
	cout << "Chuoi 1: " << s1 << endl;
	cout << "Chuoi 2: " << s2 << endl;
	//Noi chuoi
	strcat_s(s1, s2);
	cout << s1 << endl;
	return 0;
}