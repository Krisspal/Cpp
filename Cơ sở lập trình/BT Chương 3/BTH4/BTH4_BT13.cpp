#include <iostream>
#include <string>

using namespace std;

int main()
{	
	//Khai bao bien
	double n, max = INT_MIN, min = INT_MAX, sum = 0, i = 1;
	string EXIT = "CTRL + Z va Enter";
	
	//Nhap so, tinh tong va tim max, min
	cout << "Nhap so nguyen hoac nhan " << EXIT <<" de ket thuc\n";
	while (!cin.eof())		//EOF == END OF FILE
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
