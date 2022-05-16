#include <iostream>
#include <iomanip>

using namespace std;
const int M = 4, N = 3;
int main()
{
	int a[M][N];
	int i, j;
	i = 0;
	while (i < M)
	{
		j = 0;
		while (j < N)
		{
			cout << "Nhap phan tu a[" << i << "][" << j << "]" << endl;
			cin >> a[i][j];
			j++;
		}
		i++;
	}
	
	i = 0;
	while (i < M)
	{
		j = 0;
		while (j < N)
		{
			cout << setw(3) << a[i][j];
			cout << " ";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}