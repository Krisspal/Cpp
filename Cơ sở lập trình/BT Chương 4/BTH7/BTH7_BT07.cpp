#include <iostream>
#include <string>

using namespace std;

bool KTHOA(char c)
{
	if (c >= 'A' && c <= 'Z')
		return true;
	else 
		return false;
}

bool KTTHUONG(char c)
{
	if (c >= 'a' && c <= 'z')
		return true;
	else
		return false;
}

int main()
{
	int demT= 0, demH = 0;
	string S;
	cout << "Nhap chuoi ky tu:\n";
	getline(cin, S);
	for (int i = 0; i < S.length(); i++)
		if (KTHOA(S.at(i)))
			demH++;
		else
			if (KTTHUONG(S.at(i)))
				demT++;
	cout << S << " co " << demH << " ky tu in hoa va " << demT << " ky tu in thuong\n";

	system("pause");
	return 0;
			
}