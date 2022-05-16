#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;
struct MATRAN
{
	int r;
	int c;
	int **p;
};
bool DoiXung(int n)
{
	int sodoi=0, temp=n;
	while(n!=0)
	{
		sodoi=sodoi*10+(n%10);
		n=n/10;
	}
	if(temp==sodoi)
		return true;
	else return false;
}
int Tong(int **p, int c, int r)
{
	int tong=0;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
		{	
			if(p[i][j]/10!=0)
				if(DoiXung(p[i][j]))
					tong+=p[i][j];
		}
	return tong;
}
int main()
{
	MATRAN A;
	int tong=0;
	cout << "Nhap so dong cot ma tran: ";
	cin >> A.r >> A.c;
	A.p=new int *[A.r];
	for(int i=0; i<A.r; i++)
	A.p[i] = new int [A.c];
	for (int i=0; i<A.r; i++)
	{
		for(int j=0; j<A.c; j++)
		{
			A.p[i][j]=rand()%30;
			cout << setw(9) << A.p[i][j];
		}
		cout << endl;
	}
	cout << "Tong cac so doi xung trong ma tran la: " << Tong(A.p, A.c, A.r) << endl;
	system("pause");
	return 0;
}