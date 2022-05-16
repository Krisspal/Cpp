#include <iostream>
#include <iomanip>
using namespace std;

void TAOMANG(int** a,const int n)
{
	//In tu so lon nhat tu ben ngoai vao trong
	
	int hang1 = 0, cot1 = n - 1, //Hang tren cung va cot bien phai
		hang2 = n - 1, cot2 = 0,//Hang duoi cung va cot bien trai
		dem = n * n; //Bien in so, bat dau tu so lon nhat
	
	while (dem >= 1)
	{
		for (int i = cot1; i >= cot2; i--)
		{
			a[hang1][i] = dem--;//Hang tren cung
		}
		for (int j = hang1 + 1; j <= hang2; j++)
		{
			a[j][cot2] = dem--;//Cot phai
		}
		for (int i = cot2 + 1; i <= cot1; i++)
		{
			a[hang2][i] = dem--;//Hang duoi cung
		}
		for (int j = hang2 - 1; j >= hang1 + 1; j--)
		{
			a[j][cot1] = dem--;//Cot trai
		}
		//Di dan vao trong tam
		hang1++; hang2--; 
		cot1--; cot2++;
	}
}
void XUATMANG(int** a,const int n)
{
	cout << "Xuat mang\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(9) << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int** p, n;
	
	do
	{
		cout << "Nhap so nguyen n\n";
		cin >> n;
		if (n < 1 || n > 10)
		{
			cout << "Nhap sai! Nhap lai\n";
		}
	} while (n < 1 || n > 10);
	
	//Cap phat mang
	p = new int* [n];
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	
	//Tao mang va xuat mang
	TAOMANG(p, n);
	XUATMANG(p, n);
	
	//Huy cap phat
	for (int i = 0; i < n; i++)
	{
		delete[]p[i];
	}
	delete[]p;
	p = NULL;
	return 0;
}
