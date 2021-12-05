#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	bool tg, deu, can, vuong, vuongcan, thuong;
	
	cout << "Nhap 3 canh tam giac:\n";
	cout << "Canh 1: "; 
	cin >> a;
	cout << "Canh 2: ";
	cin >> b;
	cout << "Canh 3: "; 
	cin >> c;

	tg = (a < b + c) && (b < a + c) && (c < a + b);
	deu = (a == b) && (b == c);
	can = !deu && ((a == b) || (b == c) || (a == c));
	vuong = (pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2));
	vuongcan = vuong && can;

	if (tg)
		if (deu)
			cout << "Tam giac deu";
		else
			if (vuongcan)
				cout << "Tam giac vuong can";
			else
				if (can)
					cout << "Tam giac can";
				else
					if (vuong)
						cout << "Tam giac vuong";
					else
						cout << "Tam giac thuong";
	else
		cout << "Khong phai tam giac";

	cout << endl;
	system("pause");
	return 0;

}