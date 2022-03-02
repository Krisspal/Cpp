#include<iostream>
#include<iomanip>
using namespace std;

const int N = 50;

int main()
{
    int A[N][N], n;
    cout << "Nhap so nguyen n\n";
    cin >> n;

    int hang1 = 0, cot1 = 0, hang2 = n - 1, cot2 = n - 1, dem = 1;
    while (dem <= (n * n))
    {
        for (int i = cot1; i <= cot2; i++)
        {
            A[hang1][i] = dem++;
        }
        for (int j = hang1 + 1; j <= hang2; j++)
        {
            A[j][cot2] = dem++;
        }
        for (int i = cot2 - 1; i >= cot1; i--)
        {
            A[hang2][i] = dem++;
        }
        for (int j = hang2 - 1; j >= hang1 + 1; j--)
        {
            A[j][cot1] = dem++;
        }
        hang1++; hang2--; cot1++; cot2--;
    }
    cout << "Xuat mang\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(5) << A[i][j];
        }
        cout << endl;
    }
    return 0;
}