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

void duyetLNR(Node* p)
{
	if (p != NULL)
	{
		duyetLNR(p->left);
		cout << p->info << " ";
		duyetLNR(p->right);
	}
}

int countEvenNodes(Node* p) 
{
	int count = 0;
	if (p != NULL) 
	{
		count = countEvenNodes(p->left) + countEvenNodes(p->right);
		if (p->info % 2 == 0) 
			count++;
	}
	return count;
}

int countOddNodes(Node* p)
{
	int count = 0;
	if (p != NULL)
	{
		count = countOddNodes(p->left) + countOddNodes(p->right);
		if (p->info % 2 != 0)
			count++;
	}
	return count;
}

bool isPrime(int n)
{
	bool isPrime = true;
	if (n < 2)
		isPrime = false;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;
}

int countPrimeNodes(Node* p)
{
	int count = 0;
	if (p != NULL)
	{
		count = countPrimeNodes(p->left) + countPrimeNodes(p->right);
		if (isPrime(p->info))
			count++;
	}
	return count;
}

bool isPerfectSquare(int n)
{
	for (int i = 1; i * i <= n; i++)
	{
		if ((n % i == 0) && (n / i == i))
		{
			return true;
		}
	}
	return false;
}

int countPerfectNodes(Node* p)
{
	int count = 0;
	if (p != NULL)
	{
		count = countPerfectNodes(p->left) + countPerfectNodes(p->right);
		if (isPerfectSquare(p->info))
			count++;
	}
	return count;
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

	cout << "Duyet cay theo thu tu LNR:\n";
	duyetLNR(root);
	cout << endl;

	cout << "So phan tu chan trong cay la: ";
	int kq1 = countEvenNodes(root);
	cout << kq1 << endl;

	cout << "So phan tu le trong cay la: ";
	int kq2 = countOddNodes(root);
	cout << kq2 << endl;

	cout << "So phan tu nguyen to trong cay la: ";
	int kq3 = countPrimeNodes(root);
	cout << kq3 << endl;

	cout << "So phan tu la so chinh phuong trong cay la: ";
	int kq4 = countPerfectNodes(root);
	cout << kq4 << endl;

	return 0;
}