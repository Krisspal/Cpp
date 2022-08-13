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

int right_height(Node* p)
{
	int dem = 0;
	while (p != NULL)
	{
		dem++;
		p = p->right;
	}
	return dem;
}

int left_height(Node* p)
{
	int dem = 0;
	while (p != NULL)
	{
		dem++;
		p = p->left;
	}
	return dem;
}

int numberNode(Node* p)
{
	if (p == NULL)
		return 0;
	int left = left_height(p);
	int right = right_height(p);

	if (left == right)
		return pow(2, left) - 1;
	return 1 + numberNode(p->left) + numberNode(p->right);
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

int main()
{
	tree_empty();
	int n, x1;
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
	
	duyetLNR(root);
	cout << endl;

	cout << "Tong so nodes trong cay la: ";
	int nodenumber = numberNode(root);
	cout << nodenumber << endl;
	return 0;
}