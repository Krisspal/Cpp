#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Sinhvien
{
	string ten;
	int MSSV;
	int diem;
};

struct Node
{
	Sinhvien *info;
	Node* link;
};

struct listSV
{
	Node* first;
};


void init(listSV* &list)
{
	list = new listSV;
	list-> first = NULL;
}

bool isEmpty(listSV* list)
{
	if (list->first == NULL)
	{
		return true;
	}
	return false;
}

Node* createNode(Sinhvien *sv)
{
	Node* p = new Node;
	if (p != NULL)
	{
		p->info = sv;
		p->link = NULL;
	}
	return p;
}

Sinhvien* nhapThongtin()
{
	Sinhvien *sv = new Sinhvien;
	cout << "Nhap ten sinh vien: ";
	cin >> sv->ten;
	cout << "Nhap MSSV: ";
	cin >> sv->MSSV;
	cout << "Nhap diem cua sinh vien: ";
	cin >> sv->diem;
	return sv;
}

void insertLast(listSV*& list, Sinhvien* sv)
{
	Node* p = createNode(sv);
	if (list->first == NULL)
	{
		list-> first = p;
	}
	else
	{
		Node* q = list->first;
		while (q->link != NULL)
		{
			q = q->link;
		}
		q->link = p;
	}
}

void printList(listSV* list)
{
	Node* p = list->first;
	if (isEmpty(list) == true)
	{
		cout << "Danh sach rong\n";
	}
	else
	{
		cout << "MSSV" << "\t" << "Ten" << "\t" << "Diem" << "\n";
		while (p != NULL)
		{
			Sinhvien* sv = p->info;
			cout << sv->MSSV << "\t" << sv->ten << "\t" << sv->diem <<"\n";
			p = p->link;
		}
	}
}

//Bubble Sort
void sortDiem(listSV*& list)
{
	for (Node* p = list->first; p != NULL; p = p->link)
	{
		for (Node* q = p->link; q != NULL; q = q->link)
		{
			Sinhvien* sv1 = p->info;
			Sinhvien* sv2 = q->info;
			if (sv2->diem < sv1->diem)
			{
				swap(p->info, q->info);
			}
		}
	}
}

void Delete(listSV*& list, int MSSV)
{
	Node* p = list->first;
	if (isEmpty(list) == true)
	{
		cout << "Danh sach rong\n";
	}
	else
	{
		Node* q = NULL;
		while (p != NULL)
		{
			Sinhvien* sv = p->info;
			if (sv->MSSV == MSSV)
			{
				break;
			}
			q = p;
			p = p->link;
		}
		if (p == NULL)
		{
			cout << "Khong tim thay MSSV " << MSSV << endl;
		}
		else
		{
			if (p == list->first)
			{
				list->first = list->first->link;
				p->link = NULL;
				delete p;
				p = NULL;
			}
			else
			{
				q->link = p->link;
				p->link = NULL;
				delete p;
				p = NULL;
			}
		}
	}
}

void menu()
{
	cout << "1. Nhap thong tin sinh vien\n"
		<< "2. Xuat danh sach\n"
		<< "3. Sap xep diem theo thu tu tang dan\n"
		<< "4. Xoa thong tin sinh vien dua theo MSSV\n"
		<< "5. Thoat\n";
}

int main()
{
	listSV* list;
	int chon, MSSV, i = 0;
	init(list);
	do
	{
		menu();
		cout << "Chon chuc nang muon thuc hien: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			cout << "Nhap thong tin sinh vien:\n";
			Sinhvien* sv = nhapThongtin();
			insertLast(list, sv);
			i++;
			break;
		}
		case 2:
		{
			printList(list);
			cout << endl;
			break;
		}
		case 3:
		{
			sortDiem(list);
			printList(list);
			cout << endl;
			break;
		}
		case 4:
		{
			cout << "Nhap MSSV sinh vien muon xoa: ";
			cin >> MSSV;
			Delete(list, MSSV);
			printList(list);
			cout << endl;
			break;
		}
		case 5:
		{
			break;
		}
		default:
		{
			cout << "Nhap chuc nang 1-5\n";
			break;
		}
		}
	} while (chon != 5);
	return 0;
}
