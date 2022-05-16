#include <iostream>
#include <cctype>

using namespace std;

int* KTS1S2(char* s1, char* s2, int n1, int n2)
{
	int* p = NULL;
	for (int i = 0; i < (n1 - n2); i++)
	{
		if (strncmp(s2, s1 + i, n2))
		{
			p = &i;
			return p;
		}
	}
	return p;
}

int main()
{
	char s1[100], s2[100];
	int n1, n2;
	cout << "Nhap chuoi s1:\n";
	cin.getline(s1, 100);
	n1 = strlen(s1);
	cout << "Nhap chuoi s2:\n";
	cin.getline(s2, 100);
	n2 = strlen(s2);
	if (KTS1S2(s1,s2,n1,n2) == NULL)
	{
		cout << "Chuoi 2 khong xuat hien trong chuoi 1\n";
	}
	else
	{
		cout << "Vi tri xuat hien s2 trong s1 la " << KTS1S2(s1, s2, n1, n2) << endl;
	}
	return 0;
}