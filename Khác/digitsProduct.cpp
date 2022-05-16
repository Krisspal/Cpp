//Cho số tự nhiên n
//Hãy tìm số nguyên dương nhỏ nhất (lớn hơn 0) mà tích các chữ số của số đó bằng n. Nếu không có số thỏa mãn, trả ra -1.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, ans1 = 0, ans2 = 0;
	cout << "Nhap n\n";
	cin >> n;
	if (n <= 9)
	{
		ans1 = n;
	}
	if (n > 9)
	{
		for (int i = 9; i >= 2; i--)
		{
			if (n % i == 0)
			{
				ans1 = ans1 * 10 + i;
				n /= i;
			}
		}
	}
	if (ans1 != 1)
		cout << "-1" << endl;
	else
	{
		while (ans1 > 0)
		{
			int digit = ans1 % 10;
			ans2 = ans2 * 10 + digit;
			ans1 /= 10;
		}
		cout << ans2 << endl;
	}
	return 0;
}
