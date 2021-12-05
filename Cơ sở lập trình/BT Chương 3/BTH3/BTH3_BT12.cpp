#include <iostream>


using namespace std;

int main()
{
	double a, b;
	cout << "Nhap vao he so phuong trinh bac nhat ax + b= 0 :\n";
	cout << "a: "; 
	cin >>a;
	cout << "b: ";
	cin >>b;
	if (a != 0)
		cout << "Nghiem phuong trinh la " << -b / a;
	else
		if (b == 0)
			cout << "Phuong trinh vo so nghiem";
		else
			cout << "Phuong trinh vo nghiem";

	cout << endl;
	system("pause");
	return 0;
}