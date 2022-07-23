#include <iostream>
#include <iomanip>

using namespace std;

struct Node
{
	int info;
	Node* link;
};

Node* first;

void init()
{
	first = NULL;
}

void insertFirst(int x)
{
	Node* p = new Node;
	p->info = x;
	p->link = first;
	first = p;
}

void processList()
{
	Node* p = first;
	while (p != NULL)
	{
		cout << p->info << "\t";
		p = p->link;
	}
	cout << endl;
}

void interchangeSort()
{
	Node* p = first;
	Node* q = NULL;
	while (p != NULL)
	{
		q = p->link;
		while (q != NULL)
		{
			if (q->info < p->info)
			{
				swap(q->info, p->info);
			
			}
			q = q->link;
		}
		p = p->link;
	}
}

void selectionSort()
{
	Node* p = first;
	while (p != NULL)
	{
		Node* min = p;
		Node* next = p->link;
		while (next != NULL)
		{
			if (min->info > next->info)
			{
				min = next;
			}
			next = next->link;
		}
		swap(min->info, p->info);
		p = p->link;
	}
}

void menu()
{
	cout << "1. InterchangeSort\n";
	cout << "2. SelectionSort\n";
	cout << "3. Thoat\n";
}

int main()
{
	init();
	int n, x, chon;
	cout << "Nhap so phan tu muon nhap\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> x;
		insertFirst(x);
	}
	processList();
	
	do
	{
		menu();
		cout << "Nhap loai sap xep muon thuc hien\n";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			interchangeSort();
			processList();
			break;
		}
		case 2:
		{
			selectionSort();
			processList();
			break;
		}
		}
	} while (chon != 3);
	return 0;
}