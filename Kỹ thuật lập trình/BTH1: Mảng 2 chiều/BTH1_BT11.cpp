#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

const int M = 20, N = 20;

void TAO(char map[13][6])
{
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			map[i][j] = '*';
		}
	}
}

void XUAT(char map[13][6])
{
    int i, j;
     cout << setw(13) << "A" << setw(6) << "B" << setw(6) << "C"
        << setw(6) << "D" << setw(6) << "E" << setw(6) << "F" << endl;

    for (i = 0; i < 13; i++)
    {
        cout << left << setw(3) << "Hang " << setw(2) << i + 1;
        for (j = 0; j < 6; j++)
        {
            cout << right << setw(6) << map[i][j];
        }
        cout << endl;
    }
}

void NHAP(char map[13][6], char& loaive, int& hang, char& cot)
{
    
    cout << "May bay co 13 hang, moi hang co 6 ghe." << endl;
    cout << "X la cho da duoc dat\n"
        << "* la cho con trong\n";
  
    cout << "Nhap loai ve muon dat,\n"
        << "F cho hang nhat (First Class),\n"
        << "B cho hang thuong gia (Business Class),\n"
        << "E cho hang pho thong (Economy Class):" << endl;
    cin >> loaive;
    loaive = static_cast<char>(toupper(loaive));
    while (loaive != 'F' && loaive != 'B'
        && loaive && loaive != 'E')
    {
        cout << "Sai loai ve." << endl;
        cout << "Nhap loai ve muon mua,\n"
            << "F cho hang nhat (First class), \n"
            << "B cho hang thuong gia (Business class),\n"
            << "E cho pho thong (Economy class):" << endl;
        cin >> loaive;
        loaive = static_cast<char>(toupper(loaive));
    }
    switch (loaive)
    {
    case 'F':
        cout << "Hang 1 va 2 la hang nhat,\n";
        break;
    case 'B':
        cout << "Hang tu 3 den 7 la hang thuong gia,\n";
        break;
    case 'E':
        cout << "Hang 8 den 13 la hang pho thong." << endl;
        break;
    }

    cout << "Nhap hang ban muon chon cho: " << endl;
    cin >> hang;

    cout << "Chon vi tri ghe (tu A toi F). " << endl;
    cin >> cot;
    cot = static_cast<char>(toupper(cot));

    if (map[hang - 1][static_cast<int>(cot - 65)] == 'X')
    {
        cout << "Ghe nay da duoc dat! Vui long chon ghe khac\n" << endl;
        cin >> cot;
        cot = static_cast<char>(toupper(cot));
    }
    map[hang - 1][static_cast<int>(cot) - 65] = 'X';
}

int main()
{
    char map[13][6], loaive, cot, luachon;
    int hang;
    
   
        TAO(map);
        XUAT(map);
        cout << endl;
        NHAP(map, loaive, hang, cot);
        XUAT(map);
        cout << "Ban co muon tiep tuc dat ve?(Y/y neu co va N/n neu khong)\n";
        cin >> luachon;
        luachon = static_cast<char>(toupper(luachon));
   
    
    

    return 0;
}