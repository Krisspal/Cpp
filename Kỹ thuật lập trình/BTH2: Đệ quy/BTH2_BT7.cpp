#include <iostream>

using namespace std;

int CHAN(int n)
{
    if (n < 10)
        if (n % 2 == 0)
            return 1;
        else
            return 0;

    if (n % 2 == 0)
        return 1 + CHAN(n / 10);

    if (n % 2 != 0)
        return CHAN(n / 10);
}
int LE(int n)
{
    if (n < 10)
        if (n % 2 != 0)
            return 1;
        else
            return 0;

    if (n % 2 != 0)
        return 1 + CHAN(n / 10);

    if (n % 2 == 0)
        return CHAN(n / 10);
}

int main()
{
    int n;
    cout << "Nhap so nguyen n\n";
    cin >> n;
    cout << "Tong cac chu so chan trong " << n << " la " << CHAN(n) << endl;
    cout << "Tong cac chu so le trong " << n << " la " << LE(n) << endl;
    return 0;
}