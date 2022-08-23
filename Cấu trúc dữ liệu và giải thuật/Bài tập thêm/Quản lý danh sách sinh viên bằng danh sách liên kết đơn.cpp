#include <iostream>
#include <string>

using namespace std;

struct Sinhvien
{
	int id;
	string name;
	double grade;
};

Sinhvien createSinhvien()
{
	Sinhvien s;
	int id;
	string name;
	double grade;
	
	cout << "Ten: ";
	getline(cin, name);
	cout << "Id: ";
	cin >> id;
	cout << "Diem trung binh: ";
	cin >> grade;
	s.id = id;
	s.name = name;
	s.grade = grade;

	return s;
}

struct Node
{
	Sinhvien info;
	Node* link;
};

Node* first;

void init()
{
	first = nullptr;
}

Node* createNode(Sinhvien x)
{
	Node* p = new Node;
	p->info = x;
	p->link = nullptr;
	
	return p;
}

bool isEmpty(Node* first)
{
	return first == nullptr;
}

void insertFirst(Sinhvien x)
{
	Node* p = createNode(x);
	p->link = first;
	first = p;
}

void insertLast(Sinhvien x)
{
	Node* p = createNode(x);
	if (isEmpty(first))
		first = p;
	else
	{
		Node* q = first;
		while (q->link != nullptr)
			q = q->link;
		q->link = p;
	}
}

void outputSinhvien(Sinhvien s)
{
	cout << s.id << "-" << s.name << " " << s.grade << "\n";
	cout << "==========" << endl;
}

void output()
{
	Node* p = first;

	while (p != nullptr)
	{
		outputSinhvien(p->info);
		p = p->link;
	}
}

Node* find(string name)
{
	Node* p = first;
	while (p != nullptr && p->info.name != name)
		p = p -> link;
	return p;
}

Node* findMax()
{
	Node* p = first;
	Node* max = first;
	while (p != nullptr)
	{
		if (p->info.grade > max->info.grade)
			max = p;
		p = p->link;
	}
	return max;
}

void deleteFirst()
{
	if (first != nullptr)
	{
		Node* p = first;
		first = p->link;
		p->link = nullptr;
		delete(p);
	}
}

void clear() //Xoa toan bo danh sach
{
	while (first != nullptr)
		deleteFirst();
}

void insertIndex(Sinhvien x, int idx)
{
	if (first != nullptr)
	{
		Node* p = first;
		Node* pre = nullptr;

		int count = 0;

		while (p != nullptr && count < idx) //p == nullptr khi idx nam cuoi danh sach
		{
			pre = p;
			p = p->link;
			count++;
		}
		
		if (p != nullptr) 
		{
			Node* r = createNode(x);
			if (pre == nullptr) //Chen vao dau danh sach
			{
				r->link = first;
				first = r;
			}
			else //Chen vao giua danh sach
			{
				r->link = pre->link;
				pre->link = r;
			}
		}
		else //Neu chen vao cuoi danh sach thi p == nullptr
			insertLast(x);
	}
}

int main()
{
	init();
	int idx, n;

	cout << "Nhap so sinh vien can nhap thong tin: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin sinh vien " << i + 1 << ":\n";
		cin.ignore(1);
		Sinhvien s = createSinhvien();
		insertFirst(s);
	}

	output();

	cout << "Nhap thong tin sinh vien muon chen:\n";
	cin.ignore();
	Sinhvien s = createSinhvien();
	cout << "Nhap vi tri muon chen: ";
	cin >> idx;
	insertIndex(s, idx);
	output();

	cout << "Sinh vien co diem TB cao nhat la:\n";
	Node* max = findMax();
	outputSinhvien(max->info);

	deleteFirst();
	cout << "Danh sach sau khi xoa phan tu dau:\n";
	output();

	clear();

	return 0;
}
