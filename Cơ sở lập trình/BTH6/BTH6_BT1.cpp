#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFILE;
	int a, b, kq;
	cin >> a >> b;
	outFILE.open("D:/BT1.txt",ios::out);
	if (outFILE.is_open())
	{
		outFILE << a << " + " << b << " = " << a + b << endl;
		outFILE.close();
		cout << "Ghi thanh cong\n";
	} 
	else
		cout << "Khong mo duoc file\n";
	return 0;
}