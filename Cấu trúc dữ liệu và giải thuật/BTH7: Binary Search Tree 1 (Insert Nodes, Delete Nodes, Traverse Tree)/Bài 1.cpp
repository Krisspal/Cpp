#include <iostream>
#include <iomanip>

using namespace std;

struct Node
{
	int info;
	Node* left;
	Node* right;
};

Node* root;

void tree_empty()
{
	root = NULL;
}

Node* createNode(Node*& p, int x)
{
	p = new Node;
	p->info = x;
	p->right = NULL;
	p->left = NULL;
	return p;
}

void insertNode(Node*& p, int x)
{
	if (p == NULL)
	{
		/*p = new Node;
		p->info = x;
		p->left = NULL;
		p->right = NULL;*/
		p = createNode(p, x);
	}
	else
	{
		if (p->info == x)
			return;
		else if (p->info < x)
			insertNode(p->right, x);
		else
			insertNode(p->left, x);
	}
}

Node* search(Node* p, int x)
{
	if (p != NULL)
	{
		if (p->info == x)
			return p;
		else
		{
			if (p->info < x)
				search(p->left, x);
			else
				search(p->right, x);
		}
	}
	return NULL;
}

void searchStandfor(Node*& p, Node*& q)
{
	if (q->left == NULL)
	{
		p->info = q->info;
		p = q;
		q = q->right;
	}
	else
		searchStandfor(p, q->left);
}

int Delete(Node*& p, int x)
{
	if (p == NULL)
		return 0;
	if (p != NULL)
	{
		Node* q = p;
		if (p->left == NULL)
			p = p->right;
		else if (p->right = NULL)
			p = p->left;
		else
			searchStandfor(p, q->right);
		delete(q);
		return 1;
	}
	if (p->info == x)
		return Delete(p->right, x);
	else
		return Delete(p->left, x);
}

void duyetNLR(Node* p)
{
	if (p != NULL)
	{
		cout << p->info << " ";
		duyetNLR(p->left);
		duyetNLR(p->right);
	}
}

void duyetLNR(Node* p)
{
	if (p != NULL)
	{
		duyetLNR(p->left);
		cout << p->info << " ";
		duyetLNR(p->right);
	}
}

void duyetLRN(Node* p)
{
	if (p != NULL)
	{
		duyetLRN(p->left);
		duyetLRN(p->right);
		cout << p->info << " ";
	}
}
int main()
{
	tree_empty();
	int n, x1, x2, x3;
	cout << "Nhap so phan tu muon nhap vao cay: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		/*cout << "Nhap phan tu thu " << i + 1 <<": ";
		cin >> x1;*/
		x1 = rand() % 100;
		insertNode(root, x1);
	}
	cout << endl;

	cout << "Nhap phan tu muon tim trong cay: ";
	cin >> x2;
	Node* kq = search(root, x2);
	if (kq == NULL)
		cout << "Khong tim thay " << x2 << endl;
	else
		cout << "Tim thay " << x2 << " trong cay\n";

	cout << "Duyet cay theo thu tu NLR:\n";
	duyetNLR(root);
	cout << endl;
	cout << "Duyet cay theo thu tu LNR:\n";
	duyetLNR(root);
	cout << endl;
	cout << "Duyet cay theo thu tu LRN:\n";
	duyetLRN(root);
	cout << endl;
	
	cout << "Nhap phan tu muon xoa trong cay: ";
	cin >> x3;
	int kq2 = Delete(root, x3);
	if (kq2 == 0)
		cout << "Khong tim thay " << x3 << " trong cay\n";
	else
		cout << "Tim thay " << x3 << " trong cay\n";
	duyetNLR(root);
	cout << endl;

	return 0;
}