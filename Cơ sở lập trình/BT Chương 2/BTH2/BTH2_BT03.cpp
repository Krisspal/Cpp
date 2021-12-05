#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()

{
	string hoten;
	double tiencong, songay;

	cout <<"Nhap ho va ten" << endl;
	getline(cin, hoten);
	cout <<"Nhap so ngay: " << endl;
	cin >> songay;
	cout <<"Nhap tien cong: " << endl;
	cin >> tiencong;
	cout <<"Ten: " << hoten << endl;
	cout << "Tien luong: " << int(songay * tiencong) << endl;

	return 0;
}