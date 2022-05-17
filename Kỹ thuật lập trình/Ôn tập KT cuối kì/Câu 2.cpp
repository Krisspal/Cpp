#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

#define PI 3.14

using namespace std;

class Diem
{
private:
	double x, y;
public:
	void SET_XY(double a, double b);
	void XUAT();
	double KHOANGCACH(Diem P1, Diem PS2);
};

void Diem::SET_XY(double a, double b)
{
	x = a;
	y = b;
}

void Diem::XUAT()
{
	cout << "(" << x << ";" << y << ")" << endl;
}

double Diem::KHOANGCACH(Diem P1, Diem P2)
{
	double khoangcach;
	khoangcach = sqrt(((P2.x - P1.x) * (P2.x - P1.x)) + ((P2.y - P1.y) * (P2.y - P1.y)));
	return khoangcach;
}

int main()
{
	double x1, y1, x2, y2, khoangcach;
	Diem A, B, Khoang_Cach;
	//Tao diem A
	cout << "Nhap toa do diem A:\n";
	cout << "x: "; cin >> x1;
	cout << "y: "; cin >> y1;
	A.SET_XY(x1,y1);
	//Tao diem B
	cout << "Nhap toa do diem B:\n";
	cout << "x: "; cin >> x2;
	cout << "y: "; cin >> y2;
	B.SET_XY(x2,y2);
	//Xuat 2 diem A va B
	cout << "Diem A: ";
	A.XUAT();
	cout << "Diem B: ";
	B.XUAT();
	//Tinh khoang cach va dien tich hinh tron ban kinh AB
	khoangcach = Khoang_Cach.KHOANGCACH(A, B);
	cout << "Khoang cach giua 2 diem la " << khoangcach << endl;
	cout << "Dien tich hinh tron la " << PI * pow(khoangcach, 2) << endl;
	
	return 0;
}
