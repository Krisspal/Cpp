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

void Input(int x)
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
		Input(x);
	}
}

void Process()
{
	cout << "Xuat danh sach\n";
	Node* p = first;
	while (p != NULL)
	{
		cout << p->info << "\t";
		p = p->link;
	}
	cout << endl;
}

void Search_Max()
{
	Node* max = new Node;
	max->info = INT_MIN;
	Node* p = first;
	while ((p != NULL))
	{
		if (p->info > max -> info)
		{
			max = p;
		}
		p = p->link;
	}
	
	int x;
	cout << "Nhap phan tu muon chen\n";
	cin >> x;
	
	Node* new_node = new Node;
	new_node->info = x;
	new_node->link = max->link;
	max->link = new_node;
	cout << "Chen thanh cong\n";
}

int main()
{
	init();
	bool checkinput = false;
	Input_List();
	Process();
	Search_Max();
	Process();
	return 0;
}

