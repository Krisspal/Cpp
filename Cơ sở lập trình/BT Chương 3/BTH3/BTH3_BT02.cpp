#include <iostream>

using namespace std;
int main()
{
	int a, b;
	
	cout << "Nhap vao hai so a va b\n";
	cout << "a: "; 
	cin >> a;
	cout << "b: "; 
	cin >> b;
	if (a == b)
		cout << "Hai so bang nhau";
	else
		if (a > b)
			cout << "So lon nhat la " << a;
		else
			cout << "So lon nhat la " << b;

	cout << endl;
	system("pause");
	return 0;
}