#include <iostream>
#include <string>
using namespace std;

//Function ve hinh vuong
void hinhvuong(int a)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
//Chuong trinh chinh
int main()
{
	int a;
	do
	{
		cout << "Nhap canh hinh vuong:\n";
		cin >> a;
		if (a <= 0)
			cout << "Nhap sai!vui long nhap lai!\n";

	} while (a <= 0);
	hinhvuong(a);
	system("pause");
	return 0;

}
