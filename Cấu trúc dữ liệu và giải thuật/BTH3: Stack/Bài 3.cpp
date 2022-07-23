#include <iostream>
#include <iomanip>

using namespace std;

struct Node
{
	int info;
	Node* link;
};
Node* sp;

void initNode()
{
	sp = NULL;
}

int isEmpty(Node* sp)
{
	if (sp == NULL)
	{
		return 1;
	}
	return 0;
}

void Push(int x)
{
	Node* p = new Node;
	p->info = x;
	p->link = sp;
	sp = p;
}

int Pop()
{
	if (isEmpty(sp) == 0)
	{
		Node* p = sp;
		int x = p->info;
		sp = sp->link;
		delete p;
		return 1;
	}
	return 0;
}

void menu()
{
	cout << "1. Nhap danh sach\n"
		<< "2. Xuat danh sach\n"
		<< "3. Xoa phan tu cuoi danh sach\n"
		<< "4. Thoat\n";
}

int main()
{
	initNode();
	int n, chon, x;
	do
	{
		menu();
		cout << "Nhap chuc nang muon chon\n";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			cout << "Nhap gia tri muon nhap\n";
			cin >> x;
			Push(x);
			break;
		}
		case 2:
		{
			Node* p = new Node;
			p = sp;
			while (p != NULL)
			{
				cout << p->info << "\t";
				p = p->link;
			}
			cout << endl;
			break;
		}
		case 3:
			Pop();
		}
	} while (chon != 4);

	return 0;
}