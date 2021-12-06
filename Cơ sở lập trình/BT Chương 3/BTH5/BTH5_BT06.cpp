#include <iostream>
using namespace std;

int main() {
    int d = 0, r = 0, i, j;
    cout << "Nhap chieu dai (d) va chieu rong (r):\n";
    cout << "d: "; 
    cin >> d;
    cout << "r: "; 
    cin >> r;

    for (i = 1; i <= r; i++) 
    {
        for (j = 1; j <= d; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}