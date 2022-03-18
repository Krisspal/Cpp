#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *a,n,*p;
	do
	{
		cout<<"Nhap so phan tu: ";
		cin>>n;
		if(n<=0 || n>30 )
			cout<<"Nhap sai"<<endl;
	}while(n<=0 || n>30 );
	a =new int [n];
	for(int i=0;i<n;i++)
	{
		a[i]= rand()%10;
	}
	p=a;
	cout <<endl;
	cout<<"xuat mang do doi"<<endl;
	for(int i=0;i<n;i++)
		cout<<" "<<*(p+i);
	cout<<endl;
	cout<<"xuat mang don chi so"<<endl;
	for(int i=0;i<n;i++)
		cout<<" "<<p[i];
	cout<<endl;
	delete []a;
	a=0;
	return 0;

}
