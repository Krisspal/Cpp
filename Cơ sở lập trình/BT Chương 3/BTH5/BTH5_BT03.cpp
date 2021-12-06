#include <iostream>
 
using namespace std;

int main()
{
	int i,n, s1 = 0;
	double s2 = 0, s3 = 0;
	do
	{
		cout << "Nhap so nguyen n: "; 
		cin >> n;
		if(n<=0)
			cout << "Nhap sai! Vui long nhap lai\n";
	} while (n <= 0);
	for (i = 1; i <= n; i++)
	{
		s1 = s1 + i*i;
		s2 = s2 + (1.0 / i);
		s3 = s3 + (1.0 / (2 * i - 1));
	}
	cout << "S1 = " << s1 << endl;
	cout << "S2 = " << s2 << endl;
	cout << "S3 = " << s3 << endl;
	system("pause");
	return 0;

}