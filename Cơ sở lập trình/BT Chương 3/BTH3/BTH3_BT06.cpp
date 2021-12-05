#include <iostream>

using namespace std;

int main()
{
	int nam;
	cout << "Nhap nam: ";
	cin >> nam;
	if (nam %400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		cout <<"Nam " << nam <<" la nam nhuan";
	else
		cout <<"Nam " << nam <<" khong phai la nam nhuan";
	
	cout <<endl;
	system("pause");
	return 0;
	
}