#include <iostream>
#include <iomanip>

using namespace std;
const int M = 3, N = 4;
int main()
{
	int A[M][N] = { {8,4,-1,5},{2,2,6,9},{11,2,5,4} };
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout <<setw(3) << A[i][j];
			cout << " ";
		}
		cout << endl;
			
	}
	cout << endl;
	return 0;

}