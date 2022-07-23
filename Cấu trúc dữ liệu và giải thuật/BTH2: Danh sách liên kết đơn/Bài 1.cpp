#include <iostream>
#include <iomanip>
#include <cmath>
#define MAX 100;
using namespace std;

//Khai bao Node
struct Node
{
	int info;
	Node* link;
};
Node* first;

//Khoi tao danh sach rong
void init()
{
	first = NULL;
}

//Them mot phan tu vao dau danh sach
void Insert_First(int x)
{
	Node* p = new Node;
	p->info = x;
	p->link = NULL;
	first = p;
}


//Xuat cac phan tu trong danh sach
void Process_list()
{
	Node* p = first;
	while (p != NULL)
	{
		cout << p->info << "\t";
		p = p->link;
	}
}

//Tim phan tu trong danh sach
Node* Search(int x)
{
	Node* p = first;
	while ((p != NULL) && (p->info != x))
	{
		p = p->link;
	}
	return p;
}

//Xoa phan tu dau danh sach
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

//Them phan tu vao cuoi danh sach
void Insert_Last(int x)
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

//Nhap cac phan tu vao danh sach
void Input_List()
{
	int n, a;
	cout << "Nhap so phan tu muon nhap:\n";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a;
		Insert_Last(a);
	}
}

//Xoa phan tu cuoi danh sach
int Delete_Last()
{
	if (first != NULL)
	{
		Node* q, *p;
		p = first;
		q = NULL;
		if (p != NULL)
		{
			while (p-> link != NULL)
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

//Xoa phan tu chi dinh trong danh sach
void Delete_X(int x)
{
	if (first != NULL)
	{
		struct Node* p = first;
		if (first->info = x)
		{
			first = first->link;
			delete p;
		}
		else
		{
			struct Node* q = NULL;
			while (p != NULL && p->info != x)
			{
				q = p;
				p = p->link;
			}
			if (p != NULL)
			{
				q->link = p->link;
				delete p;
			}
		}
	}
}

//In ra danh sach dac
void Print_Array(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "\t";
		if (i % 10 == 9)
		{
			cout << endl;
		}
	}
}

//Tim so phan tu trong danh sach lien ket
int Findlength(Node* first)
{
	Node* current = first;
	int length = 0;
	while (current != NULL)
	{
		length++;
		current = current->link;
	}
	return length;
}

//Chuyen tu danh sach lien ket sang danh sach dac
void ConvertArray(Node* first)
{
	int len = Findlength(first), index = 0, arr[100];
	Node* current = first;
	while (current != NULL)
	{
		arr[index++] = current->info;
		current = current->link;
	}
	Print_Array(arr, len);
	cout << "Chuyen thanh cong\n";
	cout << endl;
}

//Xoa toan bo danh sach
int Delete_List()
{
	Node* p = first;
	Node* q = NULL;
	if (first != NULL)
	{
		while (p != NULL)
		{
			q = p->link;
			delete p;
			p = q;
		}
		first = NULL;
		return 1;
	}
	return 0;
}

//Menu hien thi cac lua chon
void menu()
{
	cout << "Menu:\n"
		<< "1. Nhap phan tu vao danh sach\n"
		<< "2. Xuat danh sach\n"
		<< "3. Tim phan tu trong danh sach\n"
		<< "4. Xoa phan tu dau danh sach\n"
		<< "5. Xoa phan tu cuoi danh sach\n"
		<< "6. Xoa phan tu chi dinh trong danh sach\n"
		<< "7. Chuyen tu danh sach lien ket don sang danh sach dac\n"
		<< "8. Xoa toan bo danh sach\n"
		<< "9. Thoat\n";
}

int main()
{
	init();
	int chon, x, y;
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
		
		if (checkinput == false && chon != 9)
		{
			cout <<"Ban chua tao danh sach! Hay nhap danh sach truoc!\n";
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
				Process_list();
			}
			cout << endl;
			break;
		}
		case 3:
		{
			cout << "Nhap phan tu muon tim: ";
			cin >> x;
			if (Search(x) != NULL)
				cout << "Tim thay phan tu co gia tri " << x << endl;
			else
				cout << "Khong tim thay phan tu co gia tri " << x << endl;
			break;
		}
		case 4:
		{
			if (Delete_First() == 1)
				cout << "Xoa thanh cong\n";
			else
				cout << "Xoa khong thanh cong\n";
			break;
		}
		case 5:
		{
			int kq = Delete_Last();
			if (kq == 1)
				cout << "Xoa thanh cong\n";
			else
				cout << "Xoa khong thanh cong\n";
			break;
		}
		case 6:
		{
			cout << "Nhap phan tu muon xoa: ";
			cin >> y;
			Delete_X(y);
			break;
		}
		case 7:
		{
			ConvertArray(first);
			break;
		}
		case 8:
		{
			if (Delete_List() == 1)
			{
				cout << "Xoa thanh cong\n";
			}
			else
			{
				cout << "Xoa that bai\n";
			}
			break;
		}
		}
	} while (chon != 9);
	
	return 0;
}
