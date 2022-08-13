//Ho ten: Tran Nguyen Hoang Phuc
//MSSV: 2154050235

#include <iostream>
#include <iomanip>
using namespace std;

struct Node
{
    char info;
    Node* left;
    Node* right;
};

Node* root;

void empty_Tree()
{
    root = NULL;
}

Node* createNode(Node*& p, char x)
{
    p = new Node;
    p->info = x;
    p->right = NULL;
    p->left = NULL;
    return p;
}

void insertNode(Node*& p, char x)
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


void duyetLNR(Node* p)
{
    if (p != NULL)
    {
        cout << p->info << " ";
        duyetLNR(p->left);
        duyetLNR(p->right);
    }
}

int main()
{
    empty_Tree();
    char c;
    int n;
    cout << "Nhap so ky tu: ";
    cin >> n;
    cout << "Nhap ky tu:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        insertNode(root, c);
    }

    duyetLNR(root);
    cout << endl;
    return 0;
}