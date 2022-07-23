#include <iostream>
#include <iomanip>

using namespace std;

int x1, x2, x3, x4, chon;

struct Node
{
	int info;
	Node* link;
};
Node* front, * rear;

//Khoi tao danh sach
void init()
{
	front = NULL;
	rear = NULL;
}

//Kiem tra queue rong
int isEmpty(Node* front)
{
	if (front == NULL)
	{
		return 1;
	}
	return 0;
}

//Them phan tu vao queue
void Push(int x)
{
	Node* p;
	p = new Node;
	p->info = x;
	p->link = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->link = p;
	rear = p;
}

//Lay phan tu ra khoi danh sach
int Pop(int& x)
{
	if (front != NULL)
	{
		Node* p = front;
		x = p->info;
		front = front->link;
		if (front == NULL)
			rear = NULL;
		delete p;
		return 1;
	}
	return 0;
}

void menu()
{
	cout << "1. Them phan tu vao queue\n"
		<< "2. Lay phan tu ra khoi queue\n"
		<< "3. Kiem tra queue trong\n"
		<< "4. Thoat\n";
}

int main()
{
	init();
	do
	{
		menu();
		cout << "Nhap chuc nang muon su dung: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			cout << "Nhap phan tu muon them:\n";
			cin >> x1;
			Push(x1);
			cout << "Them thanh cong\n";
			break;
		}
		case 2:
		{

			if (Pop(x3) == 1)
			{
				cout << "Lay thanh cong\n";
				cout << "Phan tu duoc lay ra la " << x3 << endl;
			}
			else
				cout << "Lay that bai\n";
			break;
		}
		case 3:
		{
			if (isEmpty(front) == 1)
			{
				cout << "Queue rong\n";
			}
			else
				cout << "Queue khong rong\n";
			break;
		}
		}
	} while (chon != 4);
	return 0;
}
