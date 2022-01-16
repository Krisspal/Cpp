#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;
	/*Strong password conditions:
	1) Length > 6
	2) Contain at least 1 digit
	3) Contain at least one lowercase character
	4) Contain at leats one uppercase character
	5) Contain at least one special character */
	bool check1 = false,
		check2 = false,
		check3 = false,
		check4 = false,
		check5 = false;
	string Spechar = "!@#$%^&*()-+";
	cout << "Enter password\n";
	getline(cin, password);
	//1
	if (password.size() > 6)
	{
		check1 = true;
	}
	for (int i = 0; i < password.size(); i++)
	{
		//2
    if (password[i] >= 48 && password[i] <= 57)
			check2 = true;
		//3
    if (password[i] >= 97 && password[i] <= 122)
			check3 = true;
		//4
    if (password[i] >= 65 && password[i] <= 90)
			check4 = true;
		//5
    if (Spechar.find(password[i] != -1))
			check5 = true;
	}
	if (check1 == true && check2 == true && check3 == true && check4 == true && check5 == true)
	{
		cout << "Strong password" << endl;
	}
	else
	{
		cout << "Weak password" << endl;
	}
	return 0;
}
