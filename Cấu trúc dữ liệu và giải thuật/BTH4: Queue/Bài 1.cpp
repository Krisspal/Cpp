#include <iostream>
#include <iomanip>

using namespace std;

#define MAX 100
int a[MAX];
int front, rear;
int x1, x2, x3, x4, chon;

//Khoi tao queue rong
void init(int& font, int& rear)
{
	front = -1;
	rear = -1;
}

//Kiem tra queue rong
int isEmpty(int front)
{
	if (front == -1)
	{
		return 1;
	}
	return 0;
}

//Kiem tra queue day
int isFull(int& rear)
{
	if (rear == MAX - 1)
	{
		return 1;
	}
	return 0;
}

//Them phan tu vao queue bang phuong phap tinh tien
int PushTT(int a[], int& front, int& rear, int x)
{
	if (isFull(rear) == 1)
	{
		return 0;
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		if (rear == MAX - 1)
		{
			for (int i = front; i <= rear; i++)
			{
				a[i - front] = a[i];
			}
			rear = MAX - 1 - front;
			front = 0;
		}
		a[++rear] = x;
		return 1;
	}
}

//Them phan tu vao queue bang phuong phap vong
int PushV(int a[], int& front, int& rear, int x)
{
	if (isFull(rear) == 1)
	{

	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		if (rear == MAX - 1)
		{
			rear = -1;
		}
		a[++rear] = x;
		return 1;
	}
}

//Lay phan tu bang phuong phap tinh tien
int PopTT(int a[], int& front, int& rear, int& x)
{
	if (isEmpty(front) == 1)
		return 0;
	else
	{
		x = a[front++];
		if (front > rear)
		{
			front = -1;
			rear = -1;
		}
		return 1;
	}
}

//Lay phan tu bang phuong phap vong
int PopV(int a[], int& font, int& rear, int& x)
{
	if (front != -1)
	{
		x = a[front];
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front++;
			if (front > MAX - 1)
			{
				front = 0;
			}
		}
		return 1;
	} 
	return 0;
}

void menu()
{
	cout << "1. Them phan tu vao queue bang phuong phap tinh tien\n"
		<< "2. Them phan tu vao queue bang phuong phap vong\n"
		<< "3. Lay phan tu ra bang phuong phap tinh tien\n"
		<< "4. Lay phan tu ra bang phuong phap vong\n"
		<< "5. Kiem tra queue trong\n"
		<< "6. Kiem tra queue day\n"
		<< "7. Thoat\n";
}

int main()
{
	init(front, rear);
	do 
	{
		menu();
		cout << "Nhap chuc anng muon su dung: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			cout << "Nhap phan tu muon them:\n";
			cin >> x1;
			if (PushTT(a, front, rear, x1) == 1)
				cout << "Nhap thanh cong\n";
			else
				cout << "Nhap that bai\n";
			break;
		}
		case 2:
		{
			cout << "Nhap phan tu muon them:\n";
			cin >> x2;
			if (PushV(a, front, rear, x2) == 1)
				cout << "Nhap thanh cong\n";
			else
				cout << "Nhap that bai\n";
			break;
		}
		case 3:
		{
			
			if (PopTT(a, front, rear, x3) == 1)
			{
				cout << "Lay thanh cong\n";
				cout << "Phan tu duoc lay ra la " << x3 << endl;
			}
			else
				cout << "Lay that bai\n";
			break;
		}
		case 4:
		{
			
			if (PopV(a, front, rear, x4) == 1)
			{
				cout << "Lay thanh cong\n";
				cout << "Phan tu duoc lay ra la " << x4 << endl;
			}
			else
				cout << "Lay that bai\n";
			break;
		}
		case 5:
		{
			if (isEmpty(front) == 1)
				cout << "Queue rong\n";
			else
				cout << "Queue co phan tu\n";
		}
		case 6:
		{
			if (isFull(rear) == 1)
				cout << "Queue day\n";
			else
				cout << "Queue con trong\n";
		}
		}
	} while (chon != 7);
	return 0;
}
