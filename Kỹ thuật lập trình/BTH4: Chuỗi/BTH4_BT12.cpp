#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2 = "";
	int n;
	cout << "Nhap vao chuoi: ";
	getline(cin, s1);
	n = s1.length();
	for (int i = n - 1; i >= 0; i--)
	{
		s2 += s1[i];
	}
	cout << s2 << endl;
	return 0;
}