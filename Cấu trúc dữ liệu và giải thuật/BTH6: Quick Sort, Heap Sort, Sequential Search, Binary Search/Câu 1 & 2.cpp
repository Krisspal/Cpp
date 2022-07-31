#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

#define MAX 100
int n, a[MAX];

void Nhapds(int a[], int &n)
{
	cout << "Nhap so phan tu cua danh sach: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 1000;
	}
}

void Xuatds(int a[], int n)
{
	cout << "Xuat danh sach:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
		if (i % 10 == 9)
		{
			cout << endl;
		}
	}
	cout << endl;
}

void quickSort(int a[], int left, int right)
{
	int x = a[(left + right) / 2];
	int i = left;
	int j = right;
	while (i < j)
	{
		while (a[i] > x) i++;
		while (a[j] < x) j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if (left < j)
		quickSort(a, left, j);
	if (right > i)
		quickSort(a, i, right);
}

int partition_first(int a[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = a[left];
	while (i < j)
	{
		while (pivot >= a[i])
			i++;
		while (pivot < a[j])
			j--;
		if (i < j)
			swap(a[i], a[j]);
	}
	swap(a[left], a[j]);
	return j;
}

int partition_last(int a[], int left, int right)
{
	int pivot = a[right];  
	int i = (left - 1); 
	for (int j = left; j <= right - 1; j++)
	{
		if (a[j] < pivot)
		{
			i++; 
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[right]);
	return (i + 1);
}

void quickSort_last(int a[], int left, int right)
{
	if (left < right)
	{
		int pivot = partition_last(a, left, right);
		quickSort_last(a, left, pivot - 1);
		quickSort_last(a, pivot + 1, right);
	}
}

void quickSort_first(int a[], int left, int right)
{
	if (left < right)
	{
		int pivot = partition_first(a, left, right);
		quickSort_first(a, left, pivot - 1);
		quickSort_first(a, pivot + 1, right);
	}
}

void shift(int a[], int i, int n)
{
	int j = 2 * i + 1;
	if (j >= n) 
		return;
	if (j + 1 < n) 
		if (a[j] < a[j + 1])
			j++;

	if (a[i] >= a[j])
		return;
	else {
		int x = a[i];
		a[i] = a[j];
		a[j] = x;
		shift(a, j, n);
	}
}

void heapSort(int a[], int n)
{
	int i = n / 2;
	while (i >= 0)
	{
		shift(a, i, n - 1);	i--;
	}
	int right = n - 1;
	while (right > 0)
	{
		swap(a[0], a[right]);
		right--;
		if (right > 0)
			shift(a, 0, right); 
	}
}

int binarySearch(int a[], int x, int low, int high) 
{

	while (low <= high) 
	{
		int mid = low + (high - low) / 2;

		if (a[mid] == x)
			return mid;
		if (a[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

bool isPrime(int a)
{
	bool isPrime = true;
	if (a < 2)
	{
		isPrime = false;
	}
	else
	{
		for (int i = 2; i < n / 2; i++)
		{
			if (a % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;
}

bool isPerfectSquare(int n)
{
	for (int i = 1; i * i <= n; i++)
	{
		if ((n % i == 0) && (n / i == i)) 
		{
			return true;
		}
	}
	return false;
}

void printMax(int a[], int n)
{
	int max = a[n - 1];
	cout << "Cac phan tu lon nhat trong danh sach:\n";
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == max)
		{
			cout << a[i] << "\t";
		}
	}
	cout << endl;
}

void printMin(int a[], int n)
{
	heapSort(a, n);
	int min = a[0];
	cout << "Cac phan tu nho nhat trong danh sach:\n";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == min)
		{
			cout << a[i] << "\t";
		}
	}
	cout << endl;
}

int main()
{
	int chon, chon2;
	bool check = false; //Kiem tra du lieu nhap vao cua bien chon
	//Chon khac 1 den 3 thi lap lai do-while
	
	//Tao va xuat danh sach
	Nhapds(a, n);
	Xuatds(a, n);
	
	//Sort
	do
	{
		cout << "1. QuickSort (giam dan)\n"
			<< "2. QuickSort pivot dau/cuoi (tang dan)\n"
			<< "3. HeapSort (tang dan)\n";
		cout << "Nhap chuc nang can thuc hien: ";
		check = false;
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			quickSort(a, 0, n - 1);
			Xuatds(a, n);
			break;
		}
		case 2:
		{
			cout << "1. Pivot dau\n"
				<< "2. Pivot cuoi\n";
			cin >> chon2;
			switch (chon2)
			{
			case 1:
			{
				quickSort_first(a, 0, n - 1);
				Xuatds(a, n);
				break;
			}
			case 2:
			{
				quickSort_last(a, 0, n - 1);
				Xuatds(a, n);
				break;
			}
			}
			break;
		}
		case 3:
		{
			heapSort(a, n);
			Xuatds(a, n);
			break;
		}
		default:
		{
			cout << "Chon 1 - 3\n";
			check = true;
			break;
		}
		}
	} while (check == true);

	//Tim phan tu trong danh sach
	int x;
	cout << "Nhap phan tu can tim\n";
	cin >> x;
	cout << binarySearch(a, x, 0, n - 1) << endl;
	
	//Xuat so nguyen to va so chinh phuong trong danh sach
	cout << "So nguyen to trong danh sach:\n";
	for (int i = 0; i < n; i++)
	{
		if (isPrime(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
		else
			continue;
	}
	cout << endl;
	cout << "So chinh phuong trong danh sach:\n";
	for (int i = 0; i < n; i++)
	{
		if (isPerfectSquare(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
		else
			continue;
	}
	cout << endl;
	
	//Xuat cac phan tu MAX va MIN trong danh sach
	printMax(a, n);
	printMin(a, n);
	
	return 0;
}
