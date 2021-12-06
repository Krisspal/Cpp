#include <iostream>

using namespace std;

int main()
{
	int n1,n2, check = 0;
	do
	{
		cout << "Nhap hai so nguyen (n1 < n2):\n";
		cout << "n1: "; 
		cin >> n1;
		cout << "n2: "; 
		cin >> n2;
		if (n1 >= n2)
			cout << "Nhap sai! Vui long nhap lai\n";
	} while (n1 >= n2);
	
	for (int i = n1; i <= n2; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				check++;
				break;
			}
		}
		if (check == 0 && i != 1)
			cout << i << " ";
		check = 0;
			

	}
	cout << endl;
	return 0;
}