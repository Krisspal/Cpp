#include <iostream>
#include <cctype>

using namespace std;

bool PALINDROME(char* s, int &n)
{
	for (int i = 0; i < n / 2; i++)
	{
		if (s[i] != s[n - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char s[100];
	int n;
	cout << "Nhap chuoi (khong co khoang trang):\n";
	cin.getline (s,50);
	n = strlen(s);
	if (PALINDROME(s,n))
		cout << s << " la chuoi Palindrome\n";
	else
		cout << s << " khong la chuoi Palindrome\n";
	return 0;
}