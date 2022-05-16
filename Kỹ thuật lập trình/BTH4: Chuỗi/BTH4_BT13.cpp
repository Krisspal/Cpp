#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "Nhap vao chuoi: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
		{
			s = s.replace(i, 1, "");
			i -= 1;
		}
	}
	cout << s << endl;
	return 0;
}