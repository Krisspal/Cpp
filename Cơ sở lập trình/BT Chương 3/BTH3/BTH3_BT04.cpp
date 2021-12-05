#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Nhap vao hai so nguyen\n";
	cout << "So thu nhat: "; 
	cin >> a;
	cout << "So thu hai: "; 
	cin >> b;
	if (a > b)
		cout << "So thu nhat lon hon so thu hai";
	else
		if (a < b)
			cout << "So thu nhat nho hon so thu hai";
		else 
			cout << "Hai so bang nhau";

	cout << endl;
	system("pause");
	return 0;

}