#include <iostream>
#include <iomanip>

using namespace std;

struct Node
{
	int info;
	Node* left;
	Node* right;
};

Node* root1; //cay 1
Node * root2; // cay 2
int n, x1, x3, x2;

void tree_empty()
{
	root1 = NULL;
	root2 = NULL;
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

void createTree1()
{
	cout << "Nhap so node muon nhap vao cay 1: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap node thu " << i + 1 <<": ";
		cin >> x1;
		/*x1 = rand() % 100;*/
		insertNode(root1, x1);
	}
}

void createTree2()
{
	cout << "Nhap so node muon nhap vao cay 2: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap node thu " << i + 1 <<": ";
		cin >> x1;
		/*x1 = rand() % 100;*/
		insertNode(root2, x1);
	}
}

int Delete(Node*& p, int x)
{
	if (p == NULL)
		return 0;
	if (p->info == x)
	{
		Node* q = p;
		if (p->left == NULL)
			p = p->right;
		else if (p->right == NULL)
			p = p->left;
		else
			searchStandfor(q, p->right);
		delete(q);
		return 1;
	}
	if (p->info < x)
		return Delete(p->right, x);
	else
		return Delete(p->left, x);
}

int demNodela(Node* p)
{
	if (p != NULL)
	{
		if (p->left == NULL && p->right == NULL)
			return 1;
		return demNodela(p->left) + demNodela(p -> right);
	}
	return 0;
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

int tongKhoatrencay(Node* p)
{
	if (p == NULL)
		return 0;
	return p->info + tongKhoatrencay(p->left) + tongKhoatrencay(p->right);
}

int tongKhoachantrencay(Node* p)
{
	int tong = 0;
	if (p == NULL)
		return 0;
	else
	{
		if (p->info % 2 == 0)
			tong += p->info;
	}
	return tong + tongKhoachantrencay(p->left) + tongKhoachantrencay(p->right);
}

int tongKhoaletrencay(Node* p)
{
	int tong = 0;
	if (p == NULL)
		return 0;
	else
	{
		if (p->info % 2 != 0)
			tong += p->info;
	}
	return tong+ tongKhoaletrencay(p->left) + tongKhoaletrencay(p->right);
}

bool laNguyento(int n)
{
	bool laNguyento = true;
	if (n <= 1)
		laNguyento = false;
	else
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0) {
				laNguyento = false;
				break;
			}
		}
	}
	return laNguyento;
}

int tongKhoanguyento(Node* p)
{
	int tong = 0;
	if (p == NULL)
		return 0;
	else
	{
		if (laNguyento(p->info))
			tong += p->info;
	}
	return tong + tongKhoanguyento(p->left) + tongKhoanguyento(p->right);
}

//Kiem tra so chinh phuong
bool isPerfectSquare(int n)
{
	if (n >= 0) 
	{
		int sr = sqrt(n);
		return (sr * sr == n);
	}
	return false;
}

int tongKhoachinhphuong(Node* p)
{
	int tong = 0;
	if (p == NULL)
		return 0;
	else
	{
		if (isPerfectSquare(p->info))
			tong += p->info;
	}
	return tongKhoachinhphuong(p->left) + tongKhoachinhphuong(p->right);
}

bool laSohoanhao(int n) 
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) 
	{
		if (n % i == 0)
			sum += i; 
	}
	if (sum == n) 
		return true;
	return false; 
}

int tongKhoahoanhao(Node* p)
{
	int tong = 0;
	if (p == NULL)
		return 0;
	else
	{
		if (laSohoanhao(p->info))
			tong += p->info;
	}
	return tongKhoahoanhao(p->left) + tongKhoahoanhao(p->right);
}

int demSonode1caycon(Node* p)
{
	if (p == NULL)
		return 0;
	int dem = ((p->left == NULL && p->right != NULL) || (p->left != NULL && p->right == NULL)) ? 1 : 0;
	return dem + demSonode1caycon(p->left) + demSonode1caycon(p->right);
}

int demSonodecontrai(Node* p)
{
	if (p == NULL)
		return 0;
	int dem = ((p->left != NULL && p->right == NULL)) ? 1 : 0;
	return dem + demSonodecontrai(p->left) + demSonodecontrai(p->right);
}

int demSonodeconphai(Node* p)
{
	if (p == NULL)
		return 0;
	int dem = ((p->left == NULL && p->right == NULL)) ? 1 : 0;
	return dem + demSonodeconphai(p->left) + demSonodeconphai(p->right);
}

void inNode2caycon(Node* p)
{
	if (p == NULL)
		return;
	if (p->left != NULL && p->right != NULL)
	{
		cout << p->info << " ";
	}

	inNode2caycon(p->left);
	inNode2caycon(p->right);
}

int demNode2caycon(Node* p)
{
	int dem = 0;
	if (p == NULL)
		return 0;
	if (p->left != NULL && p->right != NULL)
	{
		dem++;
	}

	return dem + demNode2caycon(p->left) + demNode2caycon(p->right);
}

int kiemtra2Caybangnhau(Node* p, Node* q)
{
	if (p == NULL && q == NULL)
		return 1;
	else if (p == NULL || q == NULL)
		return 0;
	else 
	{ 
		if ((p->info == q->info) && kiemtra2Caybangnhau(p->left, q->left)
			&& kiemtra2Caybangnhau(p->right, q->right))
			return 1;
		else
			return 0;
	}
}

int chieucaoCay(Node* p)
{
	if (p == NULL)
		return 0;
	int h1 = chieucaoCay(p->left);
	int h2 = chieucaoCay(p->right);
	return (h1 > h2 ? h1 : h2) + 1;
}

int tinhDosau(Node* p, int x)
{
	if (p == NULL)
		return -1;

	int depth = -1;

	if ((p->info == x)
		|| (depth = tinhDosau(p->left, x)) >= 0
		|| (depth = tinhDosau(p->right, x)) >= 0)
		return depth + 1;
	return depth;
}

int main()
{
	tree_empty();
	
	createTree1();
	
	cout << "Duyet cay theo thu tu LNR:\n";
	duyetLNR(root1);
	cout << endl;

	//Cau 2
	cout << "\n\nSo node la trong cay la " << demNodela(root1) << "\n\n";
	
	//Cau 4
	cout << "So node co duy nhat 1 cay con tren cay la " << demSonode1caycon(root1) << "\n\n";
	
	//Cau 5
	cout << "So node co duy nhat 1 cay con trai la " << demSonodecontrai(root1) << "\n\n";
	cout << "So node co duy nhat 1 cay con phai la  " << demSonodeconphai(root1) << "\n\n";
	
	//Cau 6
	cout << "So node co 2 cay con la " << demNode2caycon(root1) << "\n";
	cout << "Nhung node co 2 cay con la\n"; inNode2caycon(root1); cout << endl;

	//Cau 3
	cout << "\n\nTong khoa tren cay la " << tongKhoatrencay(root1) << "\n\n";
	cout << "Tong cac khoa chan tren cay la " << tongKhoachantrencay(root1) << "\n\n";
	cout << "Tong cac khoa le tren cay la " << tongKhoaletrencay(root1) << "\n\n";
	cout << "Tong cac khoa nguyen to tren cay la " << tongKhoanguyento(root1) << "\n\n";
	cout << "Tong cac khoa chinh phuong tren cay la " << tongKhoachinhphuong(root1) << "\n\n";
	cout << "Tong cac khoa hoan hao tren cay la " << tongKhoahoanhao(root1) << "\n\n";
	
	//Cau 8
	cout << "Chieu cao cay 1 la " << chieucaoCay(root1) << "\n\n";
	
	//Cau 9
	cout << "Nhap gia tri cua node muon tim do sau: ";
	cin >> x2;
	cout << "Do sau cua node " << x2 << " la " << tinhDosau(root1, x2) << "\n\n";
	
	//Cau 7
	createTree2();

	cout << "Duyet cay theo thu tu LNR:\n";
	duyetLNR(root2);
	cout << endl << endl;

	if (kiemtra2Caybangnhau(root1, root2) == 0)
		cout << "2 cay khong bang nhau\n";
	else
		cout << "2 cay bang nhau\n";

	//Cau 1
	cout << "Nhap phan tu muon xoa trong cay 1: ";
	cin >> x3;
	int kq2 = Delete(root1, x3);
	if (kq2 == 0)
		cout << "Khong tim thay " << x3 << " trong cay\n";
	else
		cout << "Xoa thanh cong " << x3 << " trong cay\n";
	duyetLNR(root1);
	cout << endl;

	return 0;
}
