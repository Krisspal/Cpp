#include <iostream>
#include <string>

using namespace std;

int main()
{	
	//Khai bao bien
	double n, max = INT_MIN, min = INT_MAX, sum = 0, i = 1;	//max va min lay gia tri MAX de khong bo sot n 
	string EXIT = "CTRL + Z va Enter";	//Khai bao bien de thay doi cho de
	
	//Nhap so, tinh tong va tim max, min
	cout << "Nhap so nguyen hoac nhan " << EXIT <<" de ket thuc\n";
	
	while (!cin.eof())		//EOF == END OF FILE == Ket thuc nhap khi nhan CTRL + Z
	{
		cout << "Nhap so thu " << i << ": ", cin >> n;
		sum = sum + n;
		if (n > max)
			max = n;
		if (n < min)
			min = n;
		i++;
	} 
	cout << endl;
	
	//Xuat ket qua
	cout << "Tong cac so da nhap la " << sum << endl;
	cout << "So lon nhat la " << max << endl;
	cout << "So nho nhat la " << min << endl;

	return 0;
}
