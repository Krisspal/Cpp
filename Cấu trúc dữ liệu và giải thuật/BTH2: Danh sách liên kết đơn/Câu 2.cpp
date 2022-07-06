#include <iostream>
#include <iomanip>
#include <cmath>

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

void Insert(int x)
{
	Node* p = new Node;
	p->info = x;
	p->link = NULL;
	if (first == NULL)
	{
		first = p;
	}
	else
	{
		Node* q = first;
		while (q->link != NULL)
		{
			q = q->link;
		}
		q->link = p;
	}
}

void Input_List()
{
	int n, x;
	cout << "Nhap so phan tu muon nhap vao danh sach:\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> x;
		Insert(x);
	}
}

void Process()
{
	Node* p = first;
	while (p != NULL)
	{
		cout << p->info << "\t";
		p = p->link;
	}
	cout << endl;
}

Node* Search(int x)
{
	Node* p = first;
	while ((p != NULL) && (p->info != x))
	{
		p = p->link;
	}
	return p;
}

int Delete_First()
{
	if (first != NULL)
	{
		Node* p = first;
		first = first->link;
		delete p;
		return 1;
	}
	return 0;
}

int Delete_Last()
{
	if (first != NULL)
	{
		Node* q, * p;
		p = first;
		q = NULL;
		if (p != NULL)
		{
			while (p->link != NULL)
			{
				q = p;
				p = p->link;
			}
		}
		if (p != first)
		{
			q->link = NULL;
		}
		else
		{
			first = NULL;
		}
		delete p;
		return 1;
	}
	return 0;
}

int Delete_X(int x)
{
	if (first != NULL)
	{
		if (first->info = x)
		{
			return Delete_First();
		}
	}
	else
	{
		Node* current = first, * pre = new Node;
		pre = current;
		while (current != NULL && current->info != x)
		{
			pre = current;
			current = current->link;
		}
		if (current == NULL)
			return Delete_Last();
		else
		{
			pre->link = current->link;
			delete current;
			return 1;
		}
	}
	return -1;
}

void Search_Input(int x)
{
	if (first == NULL)
	{
		cout << "Them that bai\n";
	}
	Node* pre_node = first;
	while ((pre_node->link != NULL) && (pre_node->info < x - 1))
	{
		pre_node = pre_node->link;
	}

	Node* new_node = new Node;
	new_node->info = x;
	new_node->link = pre_node->link;
	pre_node->link = new_node;
	cout << "Them thanh cong\n";
}

void menu()
{
	cout << "Menu:\n"
		<< "1. Nhap phan tu vao danh sach\n"
		<< "2. Xuat danh sach\n"
		<< "3. Tim phan tu trong danh sach\n"
		<< "4. Xoa phan tu chi dinh trong danh sach\n"
		<< "5. Chen phan tu vao danh sach\n"
		<< "6. Thoat\n";
}

int main()
{
	init();
	int chon, x1, x2, x3;
	bool checkinput = false; //Kiem tra xem da nhap danh sach vao chua
	do
	{
		menu();

		cout << "Chon: ";
		cin >> chon;

		if (chon == 1)
		{
			checkinput = true;
		}

		if (checkinput == false && chon != 6)
		{
			cout << "Ban chua tao danh sach! Hay nhap danh sach truoc!\n";
			continue;
		}

		switch (chon)
		{
		case 1:
		{
			Input_List();
			cout << "Nhap thanh cong!\n";
			break;
		}
		case 2:
		{
			if (first == NULL)
			{
				cout << "Danh sach trong\n";
			}
			else
			{
				cout << "Xuat danh sach:\n";
				Process();
			}
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "Nhap phan tu muon tim: ";
			cin >> x1;
			if (Search(x1) != NULL)
				cout << "Tim thay phan tu co gia tri " << x1 << endl;
			else
				cout << "Khong tim thay phan tu co gia tri " << x1 << endl;
			break;
		}
		case 4:
		{
			cout << "Nhap phan tu muon xoa: ";
			cin >> x2;
			Delete_X(x2);
			break;
		}
		case 5:
		{
			cout << "Nhap phan tu muon chen\n";
			cin >> x3;
			Search_Input(x3);
			break;
		}
		}
	} while (chon != 6);

	return 0;
}
