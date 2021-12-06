#include <iostream>
#include <string>
using namespace std;

bool CHECKNUM(char c)
{
	bool kq = false;
	if (c >= '0' && c <= '9')
		kq = true;
	return kq;
}

bool CHECKCHAR(char c)
{
	bool kq = false;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		kq = true;
	return kq;
}

int main()
{
	string S;
	int demchu = 0, demso = 0;
	cout << "Nhap chuoi ky tu: ";
	getline(cin, S);
	for (int i = 0; i < S.length(); i++)
	{
		if (CHECKNUM(S.at(i)))
			demso++;
		else
			if (CHECKCHAR(S.at(i)))
				demchu++;
	}
	cout << "So ky tu chu trong chuoi " << S << " la " << demchu << endl;
	cout << "So ky tu so trong chuoi " << S << " la " << demso << endl;

		 
	system("pause");
	return 0;

}