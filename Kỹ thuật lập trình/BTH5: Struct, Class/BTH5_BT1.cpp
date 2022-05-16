#include <iostream>
#include <string>

using namespace std;

struct PhongBan
{
	string maphongban;
	string tenphongban;
};

int main()
{
	PhongBan pb;
	cout << "Nhap ma phong ban: ";
	getline(cin, pb.maphongban);
	cout << "Nhap ten phong ban: ";
	getline(cin, pb.tenphongban);
	cout << "Ma phong ban: " << pb.maphongban << endl;
	cout << "Ten phong ban: " << pb.tenphongban << endl;
	return 0;
}