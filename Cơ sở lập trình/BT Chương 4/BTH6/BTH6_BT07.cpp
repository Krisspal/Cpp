#include <iostream>
#include <cmath>
using namespace std;

bool songuyento(int a)
{
    bool languyento = true;

    if (a < 2) 
    {
        languyento = false;
    }
    else {
        for (int i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                languyento = false;
                break;
            }
        }
    }
    return languyento;
}

int main()
{
	int n;
	cout << "Nhap so n:\n";
	cin >> n;
	cout <<songuyento(n);
	cout << endl;
	system("pause");
	return 0;
}