#include <iostream>
using namespace std;

int main()
{
	const int MAXSIZE = 100;
	int n;
	double values[MAXSIZE];
	//Cau d
	cout << "Nhap vao so phan tu n:\n";
	//Cau e
	cin >> n;
	cout << "Nhap gia tri cac phan tu:\n";
	for (int i = 0; i < n; i++)
		cin >> values[i];
  //Cau f
	cout << "Xuat mang:\n";
	for (int i = 0; i < n; i++
  {
		cout << values[i];
		if (i < n - 1)
			cout << ", "
  }
	cout << endl;
	system("pause");
	return 0;
}
