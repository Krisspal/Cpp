#include <iostream>
#include <string>

using namespace std;

int main()

{
	string s;
	cout << "Nhap vao chuoi ky tu: " << endl;
	getline(cin, s);
	cout << "Chieu dai chuoi ky tu la: " << s.length();

	system("pause");
	return 0;

}