#include <iostream>
using namespace std;

int main() {
    int h, i, j;
    cout << "Nhap chieu tam giac: "; 
    cin >> h;

    for (i = 1; i <= h; i++)
    {
        for (j =1;j<=i; j++)
        cout << "* ";
        cout << endl;
    }
    system("pause");
    return 0;
}