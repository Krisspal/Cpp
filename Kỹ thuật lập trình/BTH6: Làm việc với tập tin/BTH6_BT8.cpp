#include <iostream>
#include <fstream>

using namespace std;

void GHI(string filelocation, ofstream &out, int a, int b, int c)
{
	out.open(filelocation);
	if (out.is_open())
	{
		out << a <<" " << b <<" " << c;
		out.close();
		cout << "Ghi thanh cong\n";
	}
	else
		cout << "Khong mo duoc file\n";
}

void NHAP(string filelocation, ifstream& in)
{
	int a, b, c;
	in.open(filelocation, ios::out);
	if (in.is_open())
	{
		cout << "Doc File thanh cong!\n";
		while (in.eof() == false)
		{
			in >> a;
			in.ignore();
			in >> b;
			in.ignore();
			in >> c;
			in.ignore();
		}
		cout << a << " " << b << " " << c << endl;
		cout << "Nhap thanh cong\n";
	}
	else
		cout << "Khong mo duoc file\n";
}

int main()
{
	ofstream out;
	ifstream in;
	string filelocation = "D:/BT8.txt";
	int a, b, c;
	cout << "Nhap 3 so nguyen a,b,c:\n";
	cin >> a >> b >> c;
	GHI(filelocation, out, a, b, c);
	NHAP(filelocation, in);
	return 0;
}