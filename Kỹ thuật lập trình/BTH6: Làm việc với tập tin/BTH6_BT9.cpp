#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
const string filelocation1 = "D:/BT9_1.txt";
const string filelocation2 = "D:/BT9_2.txt";

void NHAPCHUOI(string& s)
{
	cout << "Nhap chuoi:\n";
	getline(cin, s);
}
void ghiFile(string filelocation, string s)
{
	ofstream outFile;
	outFile.open(filelocation);
	if (outFile.is_open())
	{
		outFile << s << endl;
		outFile.close();
		cout << "Ghi file thanh cong " << endl;
	}
	else
		cout << "Ghi file khong thanh cong " << endl;
}
void docFile(string filelocation, string& s)
{
	ifstream inFile;
	inFile.open(filelocation);
	if (inFile.is_open())
	{
		getline(inFile, s);
		inFile.close();
		cout << "Doc file thanh cong\n" << endl;
	}
	else
		cout << "Nhap file khong thanh cong\n" << endl;
}

bool CmpStr(string filelocation1, string filelocation2)
{
	bool kq;
	string s1, s2;
	/*cout << filelocation1 << endl;*/
	docFile(filelocation1, s1);
	/*cout << filelocation2 << endl;*/
	docFile(filelocation2, s2);
	if (s1 == s2)
		kq = true;
	else
		kq = false;
	return kq;
}
void noiStr(string File1, string File2)
{
	string s1, s2;
	docFile(File1, s1);
	docFile(File2, s2);
	cout << "Noi 2 chuoi\n";
	cout << s1 + ' ' + s2 << endl;
}
int demNA(string File)
{
	int dem = 0;
	string s;
	docFile(File, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i')
			dem++;
	}
	return dem;
}
int demTU(string filelocation)
{
	ifstream iFile;
	string s;
	char sc[50], ss[] = " ";
	int dem = 0;
	docFile(filelocation, s);
	strcpy(sc, s.c_str());
	char* ptok = strtok(sc, ss);
	while (ptok != NULL)
	{
		dem++;
		ptok = strtok(NULL, ss);
	}
	return dem++;
}
int main()
{
	string	s, sf1, sf2, filelocation1 = "D:/BT9_1.txt", filelocation2 = "D:/BT9_2.txt";
	cout << "Nhap chuoi 1\n";
	NHAPCHUOI(s);
	cout << "Chuoi luu vao file " << filelocation1 << endl;
	ghiFile(filelocation1, s);
	NHAPCHUOI(s);
	cout << "Chuoi luu vao file " << filelocation2 << endl;
	ghiFile(filelocation2, s);
	docFile(filelocation1, sf1);
	cout << "Noi dung file 1 la " << sf1 << endl;
	docFile(filelocation2, sf2);
	cout << "Noi dung file 2 la " << sf2 << endl;
	if (CmpStr(filelocation1, filelocation2))
		cout << "2 chuoi bang nhau " << endl;
	else
		cout << "2 chuoi khong bang nhau " << endl;
	noiStr(filelocation1, filelocation2);
	cout << "So nguyen am trong file 1 la : " << demNA(filelocation1) << endl;
	cout << "So nguyen am trong file 2 la :  " << demNA(filelocation2) << endl;
	cout << "So tu trong file 1 " << demTU(filelocation1) << endl;
	cout << "So tu trong file 2 " << demTU(filelocation2) << endl;

	return 0;
}
