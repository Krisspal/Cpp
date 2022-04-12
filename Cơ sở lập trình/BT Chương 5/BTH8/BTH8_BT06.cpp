#include <iostream>
#include <cstdlib>


using namespace std;

void nhap(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
		arr[i] = rand() % 100;
}

void xuat(const int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i];
		if (i < arrSize - 1)
			cout << ", ";
	}
}

bool tim(const int arr[], int arrSize, int x)
{
	int i = 0;
	bool kq = false;
	while (i < arrSize && !kq)
	{
		if (arr[i] != x)
			i++;
		else
			kq = true;
	}
	return kq;
}

void daonguoc(int arr[], int arrSize)
{
	int l = 0, r = arrSize - 1;
	while (l < r)
	{
		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		l++;
		r--;
	}
	cout << "\n\nDao nguoc mang\n";
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i];
		if (i < arrSize - 1)
			cout << ", ";
	}
}

void xoa(int arr[], int& arrSize, int p)
{
	for (int i = p; i < (arrSize - 1); i++)
		arr[i] = arr[i + 1];
	arrSize--;
}

const int MAXSIZE = 100;

int main()
{
	int x, p, arrSize;
	int arr[MAXSIZE];
	
	//Nhap mang
	cout << "Nhap so phan tu mang:\n";
	cin >> arrSize;
	nhap(arr, arrSize);
	
	//Xuat mang
	cout << "\nXuat mang\n";
	xuat(arr, arrSize);
	
	//Tim phan tu
	cout << "\n\nNhap gia tri x can tim\n";
	cin >> x;
	if (tim(arr, arrSize, x))
		cout << "Tim thay " << x;
	else
		cout << "Khong tim thay " << x;
	
	//Dao nguoc mang
	daonguoc(arr, arrSize);
	
	//Xoa phan tu
	cout << "\n\nNhap vi tri p can xoa (0 den " << arrSize - 1 <<") :\n";
	cin >> p;
	xoa(arr, arrSize, p);
	cout << "\nMang sau khi da xoa ky tu\n";
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i];
		if (i < arrSize - 1)
			cout << ", ";
	}
	
	cout << endl;
	system("pause");
	return 0;

}
