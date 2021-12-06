#include <iostream>

using namespace std;

double timMax2(int a, int b)
{
	int max;
	if (a >= b)
		max = a;
	else
		max = b;
	return max;
}

double timMax3(int a, int b, int c)
{
	int max;
	if (a >= b)
		max = a;
	else
		if (c >= a)
			max = c;
		else
			if (b >= c)
				max = b;
	return max;
}

int main()
{
	int x, y, z;
	cout << "Nhap ba so nguyen duong:\n";
	cin >> x >> y >> z;
	cout << "So lon nhat giua 2 so nguyen la: " << timMax2(x, y) << endl;
	cout << "So lon nhat giua 3 so nguyen la: " << timMax3(x, y, z) << endl;

	system("pause");
	return 0;

}
