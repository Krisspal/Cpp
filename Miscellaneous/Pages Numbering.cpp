//Given a number of the pages in some book find the number of digits needs to print to enumerate the pages of the book

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int pageNum, a = 0, b = 0, k = 1, temp, digits = 0;
	cout << "Enter number of pages\n";
	cin >> pageNum;
	//Count digits of number of pages
	temp = pageNum;
	while (temp > 0)
	{
		temp /= 10;
		digits += 1;
	}
	if (pageNum < 10 && pageNum > 0)
	{
		a = pageNum;
		b = 0;
	}
	else
	{
		for (int i = 1; i <= digits - 1; i++)
		{
			a = (pageNum - int(pow(10, i)) + 1) * digits;
			b = b + (9 * i) * k;
			k = k * 10;
		}
	}
	cout << "Digits need to number pages is " << a + b << endl;
	return 0;
}
